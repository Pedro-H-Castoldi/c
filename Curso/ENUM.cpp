#include <iostream>

using namespace std;

int main(){
	enum armas {rifle = 12, escopeta = 40, metralhadora = 400};
	armas armaselecionada;
	
	armaselecionada = escopeta;
	
	cout << armaselecionada;
	
	return 0;
}
