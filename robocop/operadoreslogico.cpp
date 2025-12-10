#include <iostream>
//#include <tchar.h>
//comentário para github

// _tsetlocale(LC_ALL, _T("portuguese"));
int main(){

    double Numero;
    bool maiorque100;

    std::cout<<"Digite um número: \n";
    std::cin>>Numero;
    std::cout<<"True = 1 e False = 0"<<"\n";

    maiorque100 = (Numero > 100);
    std::cout<<"O resultado é maior que 100 :"<<maiorque100 <<"\n";






}