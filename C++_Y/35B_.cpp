#include <iostream>

using namespace std;


 struct carro
    {
        string nome;
        string cor;
        int pot;
        int velMax; 
        int vel;

        //função
        void insere(string stnome, string stcor, int stpot, int stvelmax){
         nome=stnome;
         cor=stcor;
         pot=stpot;
         velMax=stvelmax; 
         vel=0;  
        }


        void mostra(){

            cout<<"\nNome.............: " << nome<< "\n";
            cout<<"Cor..............: " << cor<< "\n";
            cout<<"Potencia.........: " << pot<< "\n";
            cout<<"Velocidade..atual: " << vel<< "\n";
            cout<<"Velocidade.Maxima: " << velMax<< "\n";
        }

        void mudaVel(int mv){
            vel=mv;
            if(vel > velMax){
                vel=velMax;
            }
            if(vel < 0){
                vel=0;
            }
        }

    };


int main(){

    carro *carros=new carro[5];
    carro car1,car2,car3,car4,car5;

    carros[0]=car1;
    carros[1]=car2;
    carros[2]=car3;
    carros[3]=car4;  
    carros[4]=car5;

    carros[0].insere("Tornado","Vermelho",450,350);
    carros[1].insere("Luxo","Preto",250,260);
    carros[2].insere("Familia","Prata",150,180);
    carros[3].insere("Trabalho","Branco",80,120);
    carros[4].insere("Padrão","Cinza",100,150);

    for(int i=0; i < 5;){
        carros[i].mostra();
    }

    return 0;
}
