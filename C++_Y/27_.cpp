#include <iostream>
//enum

using namespace std;

int main(){

    enum armas{fuzil, revolver, rifle, escopeta};
    armas armaSel;

    armaSel=fuzil;
    cout<< armaSel <<"\n";


    enum carro{fusca=100, fiat=50, bmw=300, ferrari=150};
    carro litros;

    litros=fusca;
    cout<< fusca <<"litros suportado\n"; 



    return 0;
}
