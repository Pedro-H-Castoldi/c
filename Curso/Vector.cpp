#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
	int tam1, tam2;
	vector <int> vet1, vet2;
	
	vet1.push_back(8);
	vet1.push_back(66);
	vet1.push_back(1);
	vet1.push_back(69);
	vet1[3] = 100; // Só foi possível colocar dizendo a posição '[3]' pois ela já havia sido criada (vet.push_back(69)).
	
	vet2.push_back(99);
	vet2.push_back(63);
	vet2.push_back(5);
	vet2.push_back(15);
	
	// Inserir/remover elementos nas posições do vector
	vet1.insert(vet1.begin()+1, 1); // Com esse comando o valor ficará na casa indicada e o valor q habitava essa casa ficarar na casa + 1.
	vet1.erase(vet1.end()-4); // Remove.
	//vet2.clear(); // Limpa tudo.
	
	tam1 = vet1.size();
	tam2 = vet2.size();
	
	cout << "Primeiro valor do vector 1....: " << vet1.front() << endl;
	cout << "Ultimo valor do vector 1......: " << vet1.back() << endl;
	cout << "Valor do meio do vector 1.....: " << vet1.at(tam1/2) << endl;
	cout << "Valor na posicao 2 do vector 1: " << vet1.at(1) << "\n\n";
	
	
	//vet1.swap(vet2); // Troca os valores de um vector para o outro.
	
	
	
	
	for(int i=0; i<tam1; i++){
		cout << "|"<< vet1[i] << "| ";
	}
	
	cout << "\n\n";
	
	for(int i=0; i<tam2; i++){
		cout << "|"<< vet2[i] << "| ";
	}
	
	while(!vet2.empty()){
		vet2.pop_back(); // Remove gradualmente..
	}
	
	cout << "\n\nNovo tamanho de vet2: " << vet2.size();
	
	return 0;
}
