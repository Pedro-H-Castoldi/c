#include <iostream>

using namespace std;

void soma(int *var, int valor){
	*var+=valor;
	//cout << var; //O valor do endereço de memoria de "var" e "num" serão o mesmo por conto do ponteiro(*v)
}

void inserev(int *v){ // Mesmo sem o ponteiro funcionol perfeitamente!!! 
	for(int i=0; i<5; i++){
		v[i] = i;
	}	
}

int main(){
	int num = 10;
	int vet[5];
	
	//cout << &num; //O valor do endereço de memoria de "var" e "num" serão o mesmo por conto do ponteiro(*v)
	soma(&num, 30);
	inserev(vet);
	
	cout << "\n" << num << "\n\n";
	for(int i=0; i<5; i++){
		cout << vet[i] << "\n";
	}	
	
	
	return 0;
}
