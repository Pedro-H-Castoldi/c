#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Pessoa{
public:
    string nome;
    string email;
    string senha;

    void criarConta();
    void fazerLogin();
    void escolha();

private:
    string senhaf;
    string emailf;
};

void Pessoa::escolha(){
    int es;
    system("cls");
    while(es > 2){
        cout << "O que deseja fazer? 1-LOGIN | 2-CADASTRAR-SE\n";
        cin >> es;
        system("cls");

        switch(es){
        case 1:
            fazerLogin();
            break;

        case 2:
            criarConta();
            break;
        }
    }
}

void Pessoa::criarConta(){
    string em, se, no, op;
    fflush(stdin);
    cout << "Digite seu nome: ";
    getline(cin, no);
    cout << "Digite seu E-mail: ";
    cin >> em;
    cout << "Digite sua senha: ";
    cin >> se;

    nome = no;
    emailf = em;
    senhaf = se;

    system("cls");
    cout << "       CADASTRADO COM SUCESSO!\n\n";
    system("pause");
    system("cls");

    cout << "Voltar a pagina inicial?? S-SIM || N-NAO\n";
    cin >> op;
    if(op == "s" || op == "S"){
        escolha();
    }
    else{
        system("cls");
        cout << "Encerrado. Ate mais!\n\n";
    }
}

void Pessoa::fazerLogin(){
    string em, se, loop, op;

    while(loop != "n"){
        cout << "E-mail: ";
        cin >> em;

        cout << "\n";

        cout << "Senha: ";
        cin >> se;
        system("cls");
        if(em == emailf && se == senhaf){
            cout << "       LOGIN COM SUCESSO!\n\nSeja bem vindo " << nome << "!\n\n";
            loop = "n";
        }
        else{
            cout << "Algo de errado com o E-mail ou a senha...\n\n";
            system("pause");
            system("cls");
            cout << "Deseja tentar novamente? S-SIM || N-NA0\n";
            cin >> loop;
            system("cls");
            if(loop == "n" || loop == "N"){
                cout << "Encerrado. Ate mais!\n\n";
                loop = "n";
            }
        }
    }
    system("pause\n\n");
    system("cls");

    cout << "Voltar a pagina inicial?? S-SIM || N-NAO\n";
    cin >> op;
    if(op == "s" || op == "S"){
        escolha();
    }
    else{
        system("cls");
        cout << "Encerrado. Ate mais!\n\n";
    }
}

class Usuario:public Pessoa{
public:
    Usuario();
};
Usuario::Usuario(){

}

int main(){
    Usuario *ph= new Usuario;

    ph->escolha();

	return 0;
}
