#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    char *nome, *n2;
    nome = (char *) malloc(sizeof(char));
    n2 = (char *) malloc(sizeof(char));

    cout << "Digite a palavra/nome para saber se e polindromo ou nao: ";
    gets(nome);

	strcpy(n2, nome);
    strrev(n2);

	if(strcmp(nome, n2) == 0){
		cout << endl << n2 << "\n\nE polindromo.\n\n";
	}
	else{
		cout << endl << n2 << "\n\Nao e polindromo.\n\n";
	}
    return 0;
}
