#include <iostream>
//#include <tchar.h>

int main(){

  //  _tsetlocale(LC_ALL, _T("portuguese"));

    int NumVidas = 5;
    int Score = 1350;
    std::cout<<"**********inicio*************"<<std::endl;
    std::cout<<"Vidas Jogador: "<< NumVidas <<std::endl;
    std::cout<<"Pontuação: "<< Score << std::endl;
    std::cout<<"Endereço Numvidas na memória ram"<<&NumVidas<<"\n";
    std::cout<<"*********************"<<std::endl;
    //system("Pause");

}