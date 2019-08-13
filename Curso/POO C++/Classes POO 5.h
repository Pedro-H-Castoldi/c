#ifndef CLASSES_POO_5_H_INCLUDED
#define CLASSES_POO_5_H_INCLUDED


class Base1{
public:
    void impBase1();
};
void Base1::impBase1(){
    std::cout << "Base 1" << std::endl;
}

class Base2{
public:
    void impBase2();
};
void Base2::impBase2(){
    std::cout << "Base 2" << std::endl;
}

class Todas:public Base1, public Base2{
};

#endif // CLASSES_POO_5_H_INCLUDED
