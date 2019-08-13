#include <iostream>
#include <stack> 

using namespace std;

int main(){
	stack <string> nomes;
	string n[5];
	nomes.push("Luiza Helena");
	nomes.push("Pedro Henrique");
	nomes.push("Juliana");
	nomes.push("Waetan");
	nomes.push("Wallyson");
	
	for(int i=0; i<5; i++){
		cout << nomes.top() << "\n\n";
		n[i] = nomes.top();
		nomes.pop();
	}
	for (int i=0; i<5; i++){
		cout << n[i] << "\n\n";
	}
	
	return 0;
}
