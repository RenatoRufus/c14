#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int numcomputadores = 100;
    int serialcomputadores =111111;

    float numero2;
    double numero3;

    numero2 = 55.56f;
    numero3 = 45345.622254;


    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    cout<<"\tValor numcomputadoes" << numcomputadores <<"\n";
    cout<<"\tValor serialcomputadores" << serialcomputadores <<"\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;

    cout<<"\n\tValor numero2: "<< numero2<<endl;
    cout<<"\tTamanho variável numero2: " << sizeof(numero2) <<" Bytes"<<endl;
    cout<<"\tEndereço memória: "<< &numero2<<endl;

    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;

    cout<<"\n\tValor numero3: "<< setprecision(11) << numero3<<endl;
    cout<<"\tTamanho variável numero3: " << sizeof(numero3) <<" Bytes"<<endl;
    cout<<"\tEndereço memória: "<< &numero3<<endl;



    return 0;
}
