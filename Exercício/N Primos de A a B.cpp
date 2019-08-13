#include <iostream>

using namespace std;

void numerosP(int n1, int n2){
    int cont[n2], soma=0, np=0;

    for(int i=0; i<=n2; i++){
        cont[i] = 0;
    }

    for(int i=n1; i<=n2; i++){
        for(int j=1 ; j<=n2; j++){
          if(i!= 0 && i%j == 0){
            cont[i]++;
          }
        }
    }
    cout << "\n\n       Os numeros primos sao: ";
    for(int i=n1; i<=n2; i++){
        if(cont[i] == 2){
            cout << i << "| ";
            soma+= i;
            np++;
        }
    }
    cout << "\n\n       Existem " << np << " numeros primos.\n";
    cout << "\n\n       A somatoria dos numeros e: ";
    cout << soma << "\n\n";
}

int main(){
    int a, b;

    cout << "Informe o primeiro numero: ";
    cin >> a;
    cout << "Informe o segundo numero: ";
    cin >> b;

    numerosP(a, b);

	return 0;
}
