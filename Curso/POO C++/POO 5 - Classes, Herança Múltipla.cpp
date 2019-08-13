#include <iostream>
#include "Classes POO 5.h"

using namespace std;

int main(){
    Base1 *obj1 = new Base1();
    Base2 *obj2 = new Base2();
    Todas *objALL = new Todas();

    obj1->impBase1();
    obj2->impBase2();

    cout << endl;

    objALL->impBase1(); // Herança múltipla (é possivel obter os atributos das outras classes, no caso, base1 e Base2).
    objALL->impBase2();


	return 0;
}
