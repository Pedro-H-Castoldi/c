#include <iostream>
#include <list>
#include <stdlib.h>

using namespace std;

struct Pessoa{
	string nome;
	int idade;
	float altura;
	float peso;
	
	void inseredados(string snome, int sidade, float saltura, float speso){
		nome = snome;
		idade = sidade;
		altura = saltura;
		peso = speso;
	}
	
	void mostrardados(){
		cout << "Nome : " << nome << "\n";
		cout << "idade : " << idade << "\n";
		cout << "altura : " << altura << "\n";
		cout << "Peso : " << peso << "\n\n\n";
	}
};

int main(){
	Pessoa *pe = new Pessoa[3];
	string n1; 
	int n2;
	float n3, n4;
	
	for (int i=0; i<3; i++){
		cout << "Insira os dados da pessoa " << i+1 << " \n";
		fflush(stdin);
		cout << "Nome:";
		getline(cin, n1);
		
		cout << "Idade: ";
		cin >> n2;
		
		cout << "Altura: ";
		cin >> n3;
		
		cout << "Peso: ";
		cin >> n4;
		 cout << "\n\n";
		pe[i].inseredados(n1, n2, n3, n4);
	}
	
	system("cls");
	
	for(int i=0; i<3; i++){
		cout << "-Dados da pessoa " << i+1 << "\n";
		pe[i].mostrardados();
	}
	
	return 0;
}
