#ifndef CLASSES_H_INCLUDE
#define CLASSES_H_INCLUDE
#include<string>

class Veiculo
{
private:
    int tipo; //1-Moto 2=Carro 3=caminhão 4=tanque
    int velMax;
    bool arma;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);   

public:
    int vel;
    int blind;
    int rodas;
};


 void Veiculo::setTipo(int tp){
    tipo=tp;
 }
 
 void Veiculo::setVelMax(int vm){
    velMax=vm;
 }
 
 void Veiculo::setArma(bool ar){
    arma=ar;

 }



class Moto:public Veiculo{

    public:
        Moto();
};


Moto::Moto(){   //metodo construtor
    vel = 0;
    blind=0;
    rodas=2;
    tipo=1;

}



#endif