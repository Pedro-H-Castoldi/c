#include <iostream>
#include <list>
using namespace std;

int main(){
	list <int> aulas, teste;
	int tam = 10;
	list <int> :: iterator it;
	
	teste.push_front(1);
	teste.push_front(3);
	teste.push_front(5);
	teste.push_front(7);
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(10);
	
	
	for(int i=0; i<tam; i++){
		aulas.push_back(i);
	}
		aulas.merge(teste); // Coloca os vlores da lista teste dentro de aula deixando-a vazia.

	//aulas.clear(); // Limpae toda a lista.
	
	if(aulas.empty()){
		cout << "Lista vazia!\n\n";
	}
	
	aulas.sort();
	
	it=aulas.begin();
	advance(it, 4);
	aulas.insert(it, 3); // Com o insert o erase vai tirar o que foi inserido, sem o insert o erase tirará o q está no advance.
	
	aulas.erase(--it); // Remove os valores especificados acima. Para excluir outro copia tudo desde o it=aulas.begin ate o aulas.erase e escolhe o valor a ser removido.
	
	
	cout << "O tamanho da lista  e: " << aulas.size() << "\n\n";
	tam = aulas.size();
	
	for(int i=0; i<tam; i++){
		cout << aulas.front() << "\n\n";
		aulas.pop_front();
	}
	return 0;
}
