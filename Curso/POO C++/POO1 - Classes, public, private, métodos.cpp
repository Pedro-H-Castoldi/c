#include <iostream>
#include <stdlib.h>

using namespace std;

class Aviao{
	public:
		int velocidade = 0;
		int velMAX;
		string tipo;
		void IndicaTipo(int tp);
	
	private:
};

void Aviao::IndicaTipo(int tp){ // tp1 = Jato / tb2 = Monomotor / tb3 = Planador
	if(tp == 1){
		this->velMAX = 800;
		this->tipo = ("Jato");
	}
	else if(tp == 2){
		this->velMAX = 900;
		this->tipo = ("Monomotor");
	}
	else if(tp == 3){
		this->velMAX = 400;
		this->tipo = ("Planador");
	}
	else{
		cout << "ERRO!";
	}
}

int main(){
	Aviao *av1 = new Aviao;
	Aviao *av2 = new Aviao;
	int t;
	
	cout << "Indique o primeiro aviao (1 = Jato / 2 = Monomotor / 3 = Planador): ";
	cin >> t;
	av1->IndicaTipo(t);
	
	cout << "Indique o segundo aviao (1 = Jato / 2 = Monomotor / 3 = Planador): ";
	cin >> t;
	av2->IndicaTipo(t);
	
	system("cls");
	
	
	if(t > 0 && t < 4){
		cout << "Aviao 1" << endl;
		cout << "Tipo.............: " << av1->tipo << endl <<
		 "Velocidade.......: " << av2->velocidade << endl << 
		 "Velocidade maxima: " << av1->velMAX << "\n\n";	
	}
	
	if(t > 0 && t < 4){
		cout << "Aviao 2" << endl;
		cout << "Tipo.............: " << av1->tipo << endl <<
		 "Velocidade.......: " << av2->velocidade << endl << 
		 "Velocidade maxima: " << av2->velMAX;	
	}
	
	return 0;
}
