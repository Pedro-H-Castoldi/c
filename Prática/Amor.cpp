#include <iostream>

using namespace std;

int main(){
	int op;
	cout << "Pedro Henriue Castoldi Bezerra e o amor da sua vida?\n\nSe sim digita: 1 || senao digite: 2.\n\n";
	cin >> op;
	switch(op){
		case 1:
		cout << "\nVOCE ESCOLHEU CERTO! O Castoldi e o homem da sua vida.\n\n";
		break;
	case 2:
		cout << "\nVoce escolheu errado. Sofrera as consequencias...\n\n";
		break;
	default:
		cout << "\nDE QUALQUER FORMA O CASTOLDI E O AMOR DA SUA VIDA!\n\n";
		break;
		
	}
	
	return 0;
}
