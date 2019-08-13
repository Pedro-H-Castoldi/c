#include <iostream>
#include <locale>

using namespace std;

void piramide(int x){
	int i, j, a;
	if (x%2 == 0){
		cout << "Numero invalido! insira um numero impar.";
	}
	else{
		a = (x-1)/2;
		
		for (i=0; i<=a; i++){
			for(j=i+1; j<=x-i; j++){
				cout << j;
			}
			cout << "\n";
			for(j=0; j<i+1; j++){
				cout << " ";
			}
		}
	}
}

int main(){
	int i, j, a, n, r;
	cout << "Digite um numero maximo. Ele deve ser impar. ";
	cin >> n;
	cout << "\n\n";
	piramide(n);

	return 0;
}
