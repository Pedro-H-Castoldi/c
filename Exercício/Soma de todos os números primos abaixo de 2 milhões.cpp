#include <iostream>
#include <stdlib.h>
#define MAX 100

using namespace std;

int main(){
    int cont[MAX], np[MAX], soma=0;

    for(int i=0; i<MAX; i++){
        cont[i] = 0;
        np[i] = 0;
    }

   for(int i=2; i<MAX; i++){
    for(int j=1; j<MAX; j++){
      if(i%j == 0) {
        cont[i]++;
      }
    }
   }
    cout << "       Esses sao os numero primos:\n\n";

   for(int i=0; i<MAX; i++){
        if(cont[i] == 2){
            np[i] = cont[i];
        }
        if(np[i] != 0){
            cout << i << endl;
            soma += i;
        }
   }
   system("pause");
   system("cls");

   cout << "\nA somatoria de todos os numeros e: " << soma << "\n\n";

	return 0;
}
