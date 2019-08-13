#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Carro{
	string nome;
	string cor;
	int velm;
	int velMAX;

	void insere (string snome, string scor, int svelm, int svelMAX){
	nome = snome;
	cor = scor;
	velm = svelm;
	velMAX = svelMAX;
	}

	void mostra (){
	cout << "Nome: " << nome << "\n";
	cout << "Cor: " << cor << "\n";
	cout << "Velocidade atual: " << velm<< "\n";
	cout << "Velocidade maxima: " << velMAX << "\n\n\n";
	}

	void velocidade(int vel){
		velm = vel;
		if(velm > velMAX){
			velm = velMAX;
		}
		if(velm < 0){
			velm = 0;
		}
	}
};

int main(){
	Carro *car = new Carro[3];
	string n1, n2;
	int n3, n4;
	for(int i=0; i<3; i++){
		cout << "Insira os dados: \n\n";
		fflush(stdin);
		cout << "nome: "; // PROBLEMAS COM ESSE CIN...
		getline(cin, n1);

		cout << "Cor: ";
		cin >> n2;

		cout << "Velocidade atual: ";
		cin >> n3;

		cout << "Velocidade Maxima: ";
		cin >> n4;

		car[i].insere(n1, n2, n3, n4);
		car[i].velocidade(n3);
		cout << "\n\n";
	}
	system("cls");
	for (int i=0; i<3; i++){
		car[i].mostra();
	}

	return 0;
}
