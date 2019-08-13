#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue <string> names;
	
	names.push("Luiza Helena");
	names.push("Pedro Henrique");
	names.push("Juliana");
	names.push("Waetan");
	names.push("Wallyson");
	
	if (names.empty()){
		cout << "Fila vazia.\n\n";
	}
	
	cout << "Quem esta no topo da fila: " << names.front() << ";\n";
	cout << "Quem esta embaixo e: " << names.back() << ";\n";
	
	cout << "O tamanho da fila e: " << names.size() << ".\n\n";
	
	while (!names.empty()){
		cout << names.front() << "\n\n";
		names.pop();
	}
	return 0;
}
