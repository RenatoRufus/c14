#include <iostream>

using namespace std;

int main(){

    string veiculo="carro";
    string *pv;

    pv = &veiculo;// ponteiro Pv recebe o endereço da variavel veiculo


    cout<< veiculo <<"\n";
    cout<< pv <<"\n" << &veiculo; 

    *pv="Moto"; //No endereço apontado por pv adicione moto

    cout<<"\n"<< veiculo <<"\n" << *pv;


    

    return 0;
}