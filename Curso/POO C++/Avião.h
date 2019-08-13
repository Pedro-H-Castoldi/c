#ifndef AVI„O_H_INCLUDED
#define AVI„O_H_INCLUDED

class Aviao{
public:
    int vel = 0;
    int velMAX;
    std::string tipo;
    Aviao(int tp);
    void imprimir();

private:

};

Aviao::Aviao(int tp){ // tp1 = Jato / tb2 = Monomotor / tb3 = Planador
	if(tp == 1){
		velMAX = 800;
		tipo = ("Jato");
	}
	else if(tp == 2){
		velMAX = 900;
		tipo = ("Monomotor");
	}
	else if(tp == 3){
		velMAX = 400;
		tipo = ("Planador");
	}
	else{
		std::cout << "ERRO!";
	}
}

void Aviao::imprimir(){
    std::cout << "Tipo:............: " << tipo;
    std::cout << "\nVelocidade:......: " << vel;
    std::cout << "\nVelocidade maxima: " << velMAX << std::endl;
    std::cout << "-------------------------------------------\n\n";

}

#endif // AVI„O_H_INCLUDED
