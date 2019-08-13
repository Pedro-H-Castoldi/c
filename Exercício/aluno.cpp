#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int n[2];
	double ma, me, i;
	
	for (int i=0; i<3; i++){
	cout << "Informe a " << i+1 << " nota do aluno:\n\n";
	cin >> n[i];	
	}
	
	me = (n[0] + n[1] + n[2])/3;
	cout << "\nA media de exercicio do aluno e: " << me;
	ma = (n[0] + n[1]*2 + n[2]*3 + me)/7;
	cout << fixed << setprecision(1);
	cout << "\nA media de aproveitamento e: " << ma;
	
	if (ma >= 9){
		cout << "\nNota A";
	}
	if (ma >= 7.5 && ma < 9){
		cout << "\nNota B";
	}
	if (ma >= 6 && ma < 7.5){
		cout << "\nNota C";
	}
	if (ma >= 4 && ma < 6){
		cout << "\nNota D";
	}
	if (ma < 4){
		cout << "\nNota E";
	}
	return 0;
}
