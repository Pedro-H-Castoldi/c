#include <iostream>
#include <stdio.h> // Função "gets"
#include <stdlib.h> // Função "malloc (Deixa o vetor igual a quantidade q foi colocado sem desperdiçar espaço da memória

using namespace std;

int main(){
	char *nome; //Precisa ser usado ponteiros pra usar o malloc
	
	//nome = (char *) (converter de void para char já q o malloc é void) malloc (sizeof(char)) (colocar o tamanho certo dos byte; )
	nome = (char *) malloc(sizeof(char));
	
	gets(nome);
	
	//system("cls"); 
	
	cout << nome;
	
	cout << sizeof(char); //Saber o quantidade de bytes usados
			
	return 0;
}
