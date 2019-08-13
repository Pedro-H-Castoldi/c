#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
    int vet[5], menor=0;
    for(int i=0; i<5; i++){
        cout << "Informe o valor " << i+1 << ": ";
        cin >> vet[i];
        menor = vet[1];
    }

    system("cls");

    cout << "Os valores sao:\n";

    for(int i=0; i<5; i++){
        cout << "|" << vet[i] << "| ";
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    cout << "\n\nO menor valor e " << menor << ".\n\n";

	return 0;
}
