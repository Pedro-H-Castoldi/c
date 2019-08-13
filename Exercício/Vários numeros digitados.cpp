#include <iostream>

using namespace std;

void calculos(int nu){
    int n[nu], menor, maior, soma=0, cont=0, psoma=0, pcont=0;
    float media, pmedia;

    for(int i=0; i<nu; i++){
        cout << "digite o numero " << i+1 << " de " << nu << ": ";
        cin >> n[i];

        if(n[i]%2 == 0){
            psoma+= n[i];
            pcont++;
        }

        soma+= n[i];
        cont++;
    }

     menor = n[0], maior = menor;
    for(int i=0; i<nu; i++){
        if(menor > n[i]){
            menor = n[i];
        }
        if(maior < n[i]){
            maior = n[i];
        }
    }

    media = soma/nu;
    pmedia = psoma/pcont;

    cout << "       Os numeros sao: ";
    for(int i=0; i<nu; i++){
        cout << n[i] << "| ";
    }
    cout << "\n\n";

    cout << "   A soma dos numeros digitados......: " << soma << endl;
    cout << "   A quantidade dos numeros digitados: " << cont << endl;
    cout << "   A media dos numeros digitados.....: " << media << endl;
    cout << "   o maior numero digitados..........: " << maior << endl;
    cout << "   o menor numero digitados..........: " << menor << endl;
    cout << "   A media dos numeros pares.........: " << pmedia << endl;
}

int main(){
    int quant, soma, cont=0;

    cout << "Quantos numeros serao digitados?";
    cin >> quant;
    calculos(quant);


	return 0;
}
