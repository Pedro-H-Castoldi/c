#include <iostream>
#include <stdlib.h>

using namespace std;

class Habitante{
public:
    float consumoM;
    string CC;


    void codConsumidor(int n);
    void imp();
};
class Hab: public Habitante{
public:
    Hab();
};
Hab::Hab(){
    int nc;
    cout << "\nInforme o codigo do consumidor: 1-RESIDENCIAL 2-COMERCIAL 3-INDUSTRIAL. ";
    cin >> nc;
    codConsumidor(nc);

    cout << "\nInforme o consumo do mes: ";
    cin >>  this->consumoM;

    system("cls");
}

void Habitante::codConsumidor(int n){
    switch(n){
case 1:
    CC = "Codigo do consumidor: RESIDENCIAL";
    break;

case 2:
    CC = "Codigo do consumidor: COMERCIAL";
    break;

case 3:
    CC = "Codigo do consumidor: INDUSTRIAL";
    break;

default:
    cout << "\n     ERRO! COMECE NOVAMENTE!!!\n\n";
    exit(0);
    break;
    }
}

void Habitante::imp(){
    cout << this->CC << endl;
    cout << "O valor e...........: " << this->consumoM << " kWh\n\n";
}

void maiorMenorMedia( Hab nu[], int tam){
   float menor = nu[0].consumoM, media, m=0, maior = menor, total;

    for(int i=0; i<tam; i++){
        m+= nu[i].consumoM;

        if(nu[i].consumoM < menor){
            menor = nu[i].consumoM;
        }
        if(maior < nu[i].consumoM){
            maior = nu[i].consumoM;
        }
        total += nu[i].consumoM;
        cout << "\n     Dados do habitante " << i+1 << "\n\n";
        nu[i].imp();
    }

    media = m/tam;

    cout << "\n\nMedia......................: " << media << " kWh" <<  endl;
    cout << "Menor:.....................: " << menor << " kWh" <<  endl;
    cout << "Maior......................: " << maior << " kWh" <<  endl;
    cout << "Somatoria do consumo do mes: " << total  << " kWh" << endl;
}

int main(){
    int quant;

    cout << "Informe o numero de habitantes da cidade: ";
    cin >> quant;
    system("cls");

    Hab *pe = new Hab[quant];

    maiorMenorMedia(pe, quant);
	return 0;
}
