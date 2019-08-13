#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

double Multipla(double va = 1, int interacoes = 1){
	if(interacoes <= 100){
		cout << va << " ";
		return va + Multipla(va * 2, interacoes + 1);
	}
	else{
		return 0;
	}
}

int main(){
	cout << endl << "O resultado e: " << Multipla();
	
	return 0;
}
