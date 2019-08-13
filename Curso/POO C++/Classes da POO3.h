#ifndef CLASSES_DA_POO3_H_INCLUDED
#define CLASSES_DA_POO3_H_INCLUDED

class Veiculo{
public:
    std::string nome;
    int vel;

    Veiculo(int tp);
    void setnome(std::string nn);
    int getnome();
    int getvelMAX();
    void setligado(int l);
    int getligado();

private:
    int velMAX;
    bool ligado;

    void setvelMAX(int vmx);

};

int Veiculo::getnome(){
    return 1;
}

int Veiculo::getvelMAX(){
    return velMAX;
}

void Veiculo::setnome(std::string nn){
    nome = nn;
}

void Veiculo::setvelMAX(int vmx){
    velMAX = vmx;
}

void Veiculo::setligado(int l){
    if(l == 1){
        ligado = true;
    }
    else if(l == 0){
        ligado = false;
    }
}

int Veiculo::getligado(){
    return ligado;
}

Veiculo::Veiculo(int tp){
    if(tp == 1){
        setnome("Carro");
        setvelMAX(200);
    }
    if(tp == 2){
        setnome("Moto");
        setvelMAX(188);
    }
    if(tp == 3){
        setnome("Navio");
        setvelMAX(450);
    }
    setligado(0);
}

#endif // CLASSES_DA_POO3_H_INCLUDED
