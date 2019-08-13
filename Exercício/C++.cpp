#include <iostream>

using namespace std;

int verificador(int *vet){
	for(int i=0; i<5; i++){
		if (vet[i] == 30){
			cout << "\nO vetor possui o numero 30 na posicao: " << i+1;
		}
	}
	return -1;
}

int main(){
		int vet[5], n, i;
		cout << "Digite os numeros do vetor:\n";
		for (int i=0; i<5; i++){
			cin >> n;
			vet[i] = n;
		}
		
		int resultado = verificador(vet);
		
		if (resultado != -1){
				
		}
		else{
			cout << "\nO vetor nao possui o numero 30.";
		}
		return 0;
}
