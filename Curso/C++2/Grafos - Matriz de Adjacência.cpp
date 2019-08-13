#include <iostream>

using namespace std;

int grafo[5][5] ={
         {0, 0, 1, 0, 0},
         {0, 0, 1, 0, 0},
         {1, 1, 0, 1, 1},
         {0, 0, 1, 0, 1},
         {0, 0, 1, 1, 0},
         };
bool ligacao(int v1, int v2){
    if(grafo[v1][v2]){
        return true;
    }
    return false;
}

int main(){
    int ve1, ve2;
    cout << "digite as vertices para ver se possuem ligacao:\n";
    cout << "Digite a primeira vertices: ";
    cin >> ve1;

    cout << "Digite a segunda vertices: ";
    cin >> ve2;

    if(ligacao(ve1, ve2) == true){
        cout << "\nPossui ligacao entre os vertices " <<  ve1 << " e " << ve2 << ".\n\n";
    }
    else{
        cout << "\nNao existe ligacao entre esses vertices.\n\n";
    }


	return 0;
}
