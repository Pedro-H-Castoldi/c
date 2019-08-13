#ifndef CLASSES_GRILL_H_INCLUDED
#define CLASSES_GRILL_H_INCLUDED

class Cardapio{
public:
    std::string tipo;
    float preco;
    std::string categoria;

    int escategoria(int c);
    void setcompre(int sn);
    int getcompra();
    void comprado();
private:
    bool compra;

};

int Cardapio::escategoria(int c){
    if(c == 1){
        tipo = "Pizza";
        preco = 25.50;
    }
    if(c == 2){
        tipo = "Pastel";
        preco = 3.50;
    }
    if(c == 3){
        tipo = "Coxinha";
        preco = 3.5;
    }
    else{
        categoria = "ERRO!";
    }
}

void Cardapio::setcompre(int sn){
    if(sn == 1){
        compra = true;
    }
    else{
        compra = false;
    }
}

int Cardapio::getcompra(){
    return compra;
}

#endif // CLASSES_GRILL_H_INCLUDED
