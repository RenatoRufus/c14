#include <iostream>
//poo Classes, public, private, métodos

using namespace std;

class Aviao{

public:
    int vel=0;
    int velMax;
    string tipo;
    void ini (int tp);

private:

};

void Aviao::ini(int tp){ //1=jato, 2=monomotor, 3=planador
    if(tp==1){
        this->velMax=800;
        this->tipo="Jato";
    }else if(tp == 2){
        this->velMax=350;
        this->tipo="Monomotor";
    }else if(tp==3){
        this->velMax=180;
        this->tipo="Planador";
        
    
    }
}


int main(){


    Aviao *av1=new Aviao();

    av1->ini(2);

    cout<< av1->vel;
    cout<< av1->velMax;


    return 0;
}

