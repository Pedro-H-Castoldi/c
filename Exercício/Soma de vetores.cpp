#include <iostream>
#include <fstream>

using namespace std;

void Mostra(int v[], int vv[], int tam){
	for(int i=0; i<tam; i++){
		cout << v[i] << "  ";
	}
	
	cout << "\n\n";
	
	for(int i=0; i<tam/2; i++){
		cout << vv[i] << "  ";
	}
}

int Soma(int v[], int tam){
	int soma = 0;
	for(int i=0; i<tam; i++){
		soma+= v[i];
	}
	return soma;
}

int main(){
	ofstream escreve;
	escreve.open("VetorEscrito.txt");
	int vet1[10], vet2[5], aux = 0;
	
	for(int i=0; i<10; i++){
		vet1[i] = i;
		escreve << vet1[i] << "| ";
	}
	for(int i=0; i<10; i++){
		if(i%2 != 0){
			vet2[aux] = vet1[i];
			aux++;
			escreve << endl;
			escreve << vet2[aux] << "| ";
		}
	}
	
	Mostra(vet1, vet2, 10);
	 cout << "\n\nA soma e: " << Soma(vet1, 10);
	return 0;
}
