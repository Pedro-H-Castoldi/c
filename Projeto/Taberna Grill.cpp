#include <iostream>
#include "classes_grill.h"
#include <stdlib.h>

using namespace std;

int main(){
    int loop=1, n, com, cont, r[10], rp[10];

    Cardapio *pe = new Cardapio;
    while(loop != 0){
        cout << "       ESCOLHA UMA DAS OPCOES\n\n1-PIZZA | 2-PASTEL | 3-COXINHA" << endl;
        cin >> n;
        pe->escategoria(n);

        system("cls");
        cout << "       PEDIDO\n\n";
        cout << "Voce escolheu: " << pe->tipo << endl;
        cout << "Custa........: "<< pe->preco << endl;

        cout << "\nComprar? 1-SIM | 0-NAO:" << endl;
        cin >> com;
        pe->setcompre(com);

        system("cls");

        if(pe->getcompra()){
            cout << "       COMPRA COM SUCESSO" << endl;
            cout << "\nContinuar comprando? 1-SIM | 0-NAO" << endl;
            cin >> loop;

            system("cls");
        }
        else{
            cout << "Escolher outra comida? 1-SIM | 0-NAO" << endl;
            cin >> loop;
            system("cls");
        }
        cont++;
    }
    //cout << "Foram feitas " << cont << " compras";
	return 0;
}
