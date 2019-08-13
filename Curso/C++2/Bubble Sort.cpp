#include <iostream>
#include <stdlib.h>
#include <string.h>
#define MAX 100

using namespace std;

class Carro{
public:
    char nome[10];
    char cor[10];
    double preco;
};

void bubleSort(Carro car[], int tam){
    Carro aux;
    for(int i=tam; i>=0; i--){
            for(int j=1; j<=i; j++){
                if(strcmp(car[j-1].nome, car[j].nome) == 1){
                    aux = car[j-1];
                    car[j-1] = car[j];
                    car[j] = aux;
                }
            }
    }
}

int main(){
    Carro car[MAX];
    int i=0;

    while(true){
        char loop;
        cout << "Digite o nome do carro: ";
        cin >> car[i].nome;
        cout << "Digite o preco: ";
        cin >> car[i].preco;

        cout << "Deseja continuar? <S>sim <N>nao: ";
        cin >> loop;
        if(loop != 's' && loop != 'S' ){
            break;
        }
        cout << endl;
        i++;
    }

    system("cls");

    bubleSort(car, i);

    for(int j=0; j<=i; j++){
        cout << "Nome.: " << car[j].nome << endl << "Preco: " << car[i].preco << "\n\n";
    }

	return 0;
}
