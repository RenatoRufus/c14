#ifndef CLASSES_H_INCLUDE
#define CLASSES_H_INCLUDE
#include<string>

class Veiculo
{
private:
    int tipo; //1-Moto 2=Carro 3=caminhão 4=tanque
    int velMax;
    bool arma;
     

public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    void setArma(bool ar);  
    void imp();
};

void Veiculo::imp(){
    std::cout<<"Tipo veiculo.....: "<< tipo <<std::endl;
    std::cout<<"Velocidade Max...: "<< velMax <<std::endl;
    std::cout<<"Qtde rodas.......: "<< rodas <<std::endl;
    std::cout<<"Blindagem........: "<< blind <<std::endl;
    std::cout<<"Armamento........: "<< arma <<std::endl;
    std::cout<<"-----------------"<<std::endl;

}


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
    setTipo(1);
    setVelMax(120);
    setArma(false);

}



#endif