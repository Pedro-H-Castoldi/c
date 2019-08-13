#include <iostream>

using namespace std;

int main(){
	string pessoa = "Wallyson";
	string *p;
	
	p = &pessoa; //Ponteiro aponta para o endereco da variavel "pessoa"
	cout << pessoa << "\n\n";
	
	cout << p << "\n" << &pessoa; //Imprime endereco da variavel "pessoa"
	
	*p = "Pedro H"; //Muda o valor q está dentro da variavel "pessoa" para Pedro H
	
	cout << "\n\n" << pessoa << "\n" << *p; //Imprime os valores da variavel "pessoa"
	
	return 0;
}
