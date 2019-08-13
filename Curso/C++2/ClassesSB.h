#ifndef CLASSES__SISTEMA_BANC·RIO_H_INCLUDED
#define CLASSES__SISTEMA_BANC·RIO_H_INCLUDED
#include <string.h>

class Conta{
public:
    std::string nome;

    float depositar(float valord);
    float sacar(float vallors);
    void setSaldo(float s);
    void setNconta(int nc);
    int setSenha(int sen);
    void logar(int se);
    void imp();

private:
    int nconta;
    int senha;
    float saldo;
    };



 class PedroH:public Conta{
public:
     PedroH();
 };

 PedroH::PedroH(){
    nome = "Pedro Henrique Castoldi Bezerra";

    setNconta(24091996);
    setSenha (5554);
    setSaldo(500000.00);
 };

  class LuizaH:public Conta{
public:
      LuizaH();
  };
  LuizaH::LuizaH(){
    nome = 'Luiza Helena Castoldi';

    setNconta(0606157);
    setSenha(6643);
    setSaldo(400000.00);
 };

 class Users:public PedroH, public LuizaH{
 };

 void Conta::imp(){
    std::cout << "ola" << nome << "       Seja Bem Vindo!" << "\n\n";
    std::cout << "Seu saldo e de: " << saldo;
 };
 void Conta::setSaldo(float s){
    saldo = s;
 }
 void Conta::setNconta(int nc){
    nconta = nc;
 }
 int Conta::setSenha(int sen){
    senha = sen;
 }
 float Conta::depositar(float valord){
    return saldo+= valord;
 }
 float Conta::sacar(float valors){
    return saldo-= valors;
 }

void Conta::logar(int se){
        if(se == this->senha){
            std::cout << "Logado com sucesso!" << std::endl;
        }
        else{
            std::cout << "Erro ao logar";
        }
    }
#endif // CLASSES__SISTEMA_BANC·RIO_H_INCLUDED
