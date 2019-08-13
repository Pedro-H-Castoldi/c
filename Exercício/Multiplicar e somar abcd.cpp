#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void Soma_e_Multi(int vet[]){
    int r=0;
    cout << "           SOMA\n";
    for(int i=0; i<4; i++){
            cout << "---------------------------\n";
        for(int j=i+1; j<4; j++){
            r = vet[i] + vet[j];
            cout << "       " << vet[i] << "+" << vet[j] << ": " << r << endl;
    }
    }
    cout << endl;
    cout << "       MULTIPLICACAO\n";
    for(int i=0; i<4; i++){
            cout << "----------------------------\n";
        for(int j=i + 1; j<4; j++){
            r = vet[i] * vet[j];
            cout << "       " << vet[i] << "*" << vet[j] << ": " << r << endl;
    }
    }
}

int main(){
    int n[4];

    for(int i=0; i<4; i++){
        cout << "Informe o valor " << i+1 <<": ";
        cin >> n[i];
    }
    system("cls");
    Soma_e_Multi(n);

	return 0;
}
