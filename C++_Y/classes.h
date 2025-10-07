#ifndef CLASSES_H_INCLUDE
#define CLASSES_H_INCLUDE
#include<string>

class Veiculo{

    public:
        int vel;
        int tipo;
        Veiculo(int tp);
        int getVelMax();
        bool getLigado();
        void setLigado(int l);
        


    private:
        void setVelMax(int vm);
        std::string nome;
        int velMax;
        bool ligado;
        


};

void Veiculo::setLigado(int l){
    if(l==1){
        ligado=true;

    }else if(l==0){
        ligado=false;
    }
}

bool Veiculo::getLigado(){
    return ligado;
}

int Veiculo::getVelMax(){
    return velMax; 
}

void Veiculo::setVelMax(int vm){
    velMax=vm;

}


Veiculo::Veiculo(int tp){
    tipo = tp;
    if(tipo==1){
        nome="Carro";
       // velMax=200;
       setVelMax(200);
    }else if(tipo==2){
        nome="Avião";
       // velMax=800;
       setVelMax(800);
    }if(tipo==3){
        nome="Navio";
        //velMax=120;
        setVelMax(120);

    }
    setLigado(0);

}


#endif