#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

Repeticao0(int matriz[3][3], int tam){
	int rep=0;
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++){
			if(matriz[i][j] == 0){
				rep++;
			}
		}
	}
	return rep;
}

int main(){
	srand(time(NULL));
	int mat[3][3];
	
	for(int i=0; i<3; i++){
		cout << endl;
		for(int j=0; j<3; j++){
			mat[i][j] = rand()%101 - 50; 
			cout << mat[i][j] << "|";
		}
	}
	Repeticao0(mat, 3);
	cout << "\n\n" << Repeticao0(mat, 3);
	return 0;
}
