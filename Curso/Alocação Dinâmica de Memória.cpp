#include <iostream>
#include <stdio.h> // Fun��o "gets"
#include <stdlib.h> // Fun��o "malloc (Deixa o vetor igual a quantidade q foi colocado sem desperdi�ar espa�o da mem�ria

using namespace std;

int main(){
	char *nome; //Precisa ser usado ponteiros pra usar o malloc
	
	//nome = (char *) (converter de void para char j� q o malloc � void) malloc (sizeof(char)) (colocar o tamanho certo dos byte; )
	nome = (char *) malloc(sizeof(char));
	
	gets(nome);
	
	//system("cls"); 
	
	cout << nome;
	
	cout << sizeof(char); //Saber o quantidade de bytes usados
			
	return 0;
}
