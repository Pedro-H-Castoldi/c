#include <iostream>
#include <stdlib.h>

using namespace std;

struct Pessoa{
	string nome;
	string raca;
	string sex;
	int idade;
	int rg;
};

int main(){
	Pessoa *pe = new Pessoa[2];
	
	
	for(int i=0; i<2; i++){
	cout << "Digite o nome da pessoa " << i+1 << "\n";
	
	fflush(stdin); // Faz o programa n achar q o nome seja lixo.
	
	cout << "Nome completo: "; // ERRO NO NOME!!!
	getline(cin, pe[i].nome);
	
	cout << "Raca: ";
	cin >> pe[i].raca;
	
	cout << "Sexo: ";
	cin >> pe[i].sex;
	
	cout << "Idade: ";
	cin >> pe[i].idade;
	
	cout << "RG: ";
	cin >> pe[i].rg;
	
	system("cls");
	}

	system("cls");
	
	for(int i=0; i<2; i++){
	cout << "Nome: " << pe[i].nome << "\n";
	cout << "Raca: " << pe[i].raca << "\n";
	cout << "Sexo: " << pe[i].sex << "\n";
	cout << "Idade: " << pe[i].idade << "\n";
	cout << "RG: " << pe[i].rg << "\n\n\n";
	}
	
	return 0;
}
