#include <iostream>
#include "Classes da POO4.h"
#include <stdlib.h>

using namespace std;

int main(){
    int n, com[2], quant[3] = {0, 0, 0}, sn=1;
    float preco[3] = {0, 0, 0};
    Pizza *co1=new Pizza;
    Pastel *co2=new Pastel;
    Coxinha *co3=new Coxinha;
    Comida *pp=new Comida;

    cout << pp->nome;



    while(sn!= 0){
    cout << "       O que deseja comprar?\n\n   1-PIZZA | 2-PASTEL | 3-COXINHA" << endl;
    cin >> n;

     switch(n){
    case 1:
        co1->imp();
        com[0] = 1;
        quant[0]++;
        break;
    case 2:
        co2->imp();
        com[1] = 2;
        quant[1]++;
        break;
    case 3:
        co3->imp();
        com[2] = 3;
        quant[2]++;
    default:
        cout << "ERRO!";
        break;
     }
     system("pause");
     system("cls");

     cout << "          Continuar comprando?\n\n            1-SIM | 0-NAO\n";
     cin >> sn;
     system("cls");
    }
    cout << "       Voce comprou:\n\n";
    if(com[0] == 1){
        preco[0] = quant[0] * co1->preco;
        cout << quant[0] << ": " << co1->nome << "   ----------------custo: " << preco[0] << endl;
    }
    if(com[1] == 2){
        preco[1] = quant[1] * co2->preco;
        cout << quant[1] << ": " << co2->nome << "  ----------------custo: " << preco[1] << endl;
    }
    if(com[2] == 3){
        preco[2] = quant[2] * co3->preco;
        cout << quant[2] << ": " << co3->nome << " ----------------custo: " << preco[2] << endl;
    }
    cout << "----------------------------------------------TOTAL: " << preco[0]+preco[1]+preco[2];
   /* co1->imp();
    co2->imp();
    co3->imp();*/
	return 0;
}
