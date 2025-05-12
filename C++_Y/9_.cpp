//#09 - Comando de decisão IF ELSE- Parte 1
#include <iostream>

using namespace std;

int main(){

    int num=1;
    int num2=50;
    int sol=1;
    char opc='s';

    /*
    se(teste lógico){
        se o teste for verdadeiro
        }    
    se não / caso contrário{
        se o teste for falso }
        */
    //teste lógico
    // >, <, >= , <= , ==, !=

    if(num >= 10){
        cout<<"Valor de num maior ou igual que 10\n";
    }else{
        cout<<"Resultado falso\n";
    }

    if(sol==1){
        cout<<"Vou ao club\n";
    }else{
        cout<<"Vou ao cinema\n";
    }



    return 0;
}