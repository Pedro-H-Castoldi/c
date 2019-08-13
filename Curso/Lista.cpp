#include <iostream>
#include <list>
using namespace std;

int main(){
	list <string> aula;
	int tam = 10;
	/*list <int> :: iterator it; // Colocar um valor em uma certa casa
	
	for(int i=0; i<tam; i++){
		aula.push_front(i);
	}
	
	it = aula.begin();
	advance(it,5); // Casa onde será colocado o valor
	aula.insert(it,1000); // Valor a ser colocado
	*/
	
	aula.push_back("b");
	aula.push_back("z");
	aula.push_back("q");
	aula.push_back("h");
	aula.push_back("b");
	aula.push_back("m");
	aula.push_back("p");
	aula.push_back("s");
	aula.push_back("f");
	aula.push_back("e");
	
	cout << "Otamanho da lista e: " << aula.size() << "\n\n";
	
	tam = aula.size();
	
	aula.sort(); // Ordena
	//aula.reverse(); //Inverte a ordem
	
	for(int i=0; i<tam; i++){
		cout << aula.front() << "\n\n";
		aula.pop_front();
	}
	
	return 0;
}
