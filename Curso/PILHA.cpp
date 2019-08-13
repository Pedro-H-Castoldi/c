#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack <string> cartas;
	
	cartas.push("Carta 1");
	cartas.push("Carta 2");
	cartas.push("Carta 3");
	cartas.push("carta 4");
	
	/*while (!cartas.empty()){ // Maneira de excluir elementos da  Pilha
		cartas.pop();
	}*/
	
	if(cartas.empty()){
		cout << "Pilha vazia\n\n";
		return 0;
 }
	else{
		cout << "Pilha com cartas\n\n";
	}
	
/*	cout << "Quantidade de cartas: " << cartas.size() << "\n";
	
	cartas.pop();
	
	cout << "Quantidade de cartas: " << cartas.size() << "\n";
	
	cout << "Carta do topo: "<< cartas.top();*/
	
	for (int i=0; i<4; i++){
		cout << "Carta do topo: " << cartas.top() << "\n\n"; // Mostrar os valores da Pilha.
		cartas.pop();
	}
	return 0;
}
