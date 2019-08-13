#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	float pi = M_PI, nn = 4.656;
	int n= 14;
	
	printf("%.2f", pi);
	
	cout << "Numero em DEC: " << n << "\n\n";
	cout << "Numero em HEX: " << hex << n << "\n\n";
	cout << "Numero em OCT: "  << oct << n << "\n\n";
	
	// Especificar a largura (quantidade de espaços). Setfill é opcional, serve para colocar algum elemento.
	cout << "Numero de espacos:" << setw(10) << setfill('0') << pi << "\n\n";
	
	// Da biblioteca 'math.h'. Com ela pode estabelecer a quantidade das casas decimais + 1 (se quer 2 faz: 'cout.precision(3)'. -1 desfaz a aplicação
	cout.precision(3); 
	cout << pi << "\n\n";
	
	// Em notação cientifica
	cout << std::scientific << pi;
	
	return 0;
}
