#include <iostream>
#include "ClassesSB.h"
#include <stdlib.h>

using namespace std;

int main(){
    Users *uss=new Users;
    int se;

    cout <<         "Faca seu login\n\n";
    cout << "Nome do usuario:\n";

    cout << "Senha:\n";
    cin >> se;
    uss->logar(se);

	return 0;
}
