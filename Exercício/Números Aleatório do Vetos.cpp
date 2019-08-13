#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

void mostrar(float vet[], int t){
	for(int i=0; i<t; i++){
		cout << "|" << vet[i] << "| ";
	}
	cout << endl;
}

void modificar(float vet[], int valor){
	if(valor%2 == 0 && valor > 30){
		for(int i=0; i<50; i++){
			vet[i]+= valor;
		}
	}
	else if(valor%2 != 0 && valor<2){
		for(int i=0; i<50; i++){
			vet[i]*= -1;
		}
	}
	else{
		for(int i=0; i<50; i++){
			vet[i] = sqrt(vet[i]);
	}
}
}

int main(){
	srand(time(NULL));
	float v[50];
	int valor;
	for(int i=0; i<50; i++){
		v[i] = rand()%50 + 1;
	}
	
	mostrar(v, 50);
		
	cout << "Insira um valor: ";
	cin >> valor;
	
	modificar(v, valor);
	cout.precision(3);
	mostrar(v, 50);
	
	return 0;
}
