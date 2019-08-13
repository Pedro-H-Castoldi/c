#include <iostream>
#include <list>
#include <stdlib.h>

using namespace std;

int main(){
	list <string> nome;
	string n[2];
	
	for(int i=0; i<2; i++){
		cout << "Digite o nome " << i+1 << ":\n\n";
		getline(cin, n[i]);
		
		nome.push_back(n[i]);
		cout << "\n";
	}
	
	system("cls");
	
	nome.sort();
	
	cout << "Os nomes sao: \n\n";
	
	while(!nome.empty()){
		cout << nome.front() << "\n\n";
		nome.pop_front();
	}
	
	return 0;
}
