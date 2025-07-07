#include <iostream>

using namespace std;


 struct carro
    {
        string nome;
        string cor;
        int pot;
        int velMax; 


    };


int main(){

    carro car1;

    car1.nome="Tornado";
    car1.cor="Vermelho";
    car1.pot=450;
    car1.velMax=350;

    cout<<"Nome.............: " << car1.nome<< "\n\n";
    cout<<"Cor..............: " << car1.cor<< "\n\n";
    cout<<"Potencia.........: " << car1.pot<< "\n\n";
    cout<<"Velocidade Maxima: " << car1.velMax<< "\n\n";
   



    return 0;
}
