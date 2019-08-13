#include <iostream>
#include "Classes da POO3.h"
#include <stdlib.h>

using namespace std;

int main(){
    int n, p, op, cont=0;
    while(op != 1){
        cout << "Informe a categoria do veiculo: 1-CARRO | 2-MOTO | 3-NAVIO\n";
        cin >> p;
        Veiculo *v1= new Veiculo(p);

        system("cls");

        cout << "Categoria " << v1->nome << " escolhida.\n" << endl;

        system("pause");
        system("cls");

        cout << "Deseja ligar o veiculo? 1=SIM 2=NAO: ";
        cin >> n;
        v1->setligado(n);

        system("cls");

        cout << "Tipo.............: " << v1->nome << endl;
        cout << "Velocidade Maxima: " << v1->getvelMAX() << endl;
        if(v1->getligado()){
            cout << "Status do veiculo: LIGADO\n\n";
        }
        else{
            cout << "Status do veiculo: DESLIGADO\n\n";
        }
        system("pause");

        cout << "\n\nDESEJA SAIR? 1-SIM | 2-NAO\n" << endl;
        cin >> op;
        system("cls");
    }


    return 0;
}
