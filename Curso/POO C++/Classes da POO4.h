#ifndef CLASSES_DA_POO4_H_INCLUDED
#define CLASSES_DA_POO4_H_INCLUDED

class Comida{
public:
    std::string nome;
    float preco;
    void setTipo(int tp);
    void imp();

private:
    int tipo; // 1-PIZZA | 2-PASTEL | 3-COXINHA
};

void Comida::imp(){
    std::cout << "\n\n";
    std::cout << "Comida: " << nome << std::endl;
    std::cout << "preco.: " << preco << std::endl;
    std::cout << "Tipo..: " << tipo << std::endl;
    std::cout << "----------------------------------------\n\n";
}

void Comida::setTipo(int np){
    tipo = np;
}

class Pizza:public Comida{
public:
    Pizza();
};
Pizza::Pizza(){
    nome = "Pizza";
    preco = 25.00;
    setTipo(1);
}

class Pastel:public Comida{
public:
    Pastel();
};
Pastel::Pastel(){
    nome = "Pastel";
    preco = 3.5;
    setTipo(2);
}

class Coxinha:public Comida{
public:
    Coxinha();
};

Coxinha::Coxinha(){
    nome = "Coxinha";
    preco = 3.5;
    setTipo(3);
}
#endif // CLASSES_DA_POO4_H_INCLUDED
