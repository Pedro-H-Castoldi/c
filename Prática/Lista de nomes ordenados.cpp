#include <iostream>
#include <list>
#include <stdlib.h>

using namespace std;

int main(){
	list <string> nomes;
	string n[5];
	cout << "Insira os 5 nomes\n\n";
		
	for(int i=0; i<5; i++){
		getline(cin, n[i]);
		cout << "\n";
		nomes.push_back(n[i]);
	}
	system("cls");
	
	nomes.sort();
	
	 cout << "OS NOMES SAO:\n\n";
	 
	while(!nomes.empty()){
		cout << nomes.front() << "\n\n";
		nomes.pop_front();
	}
	return 0;
}
