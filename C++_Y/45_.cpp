//POO, Classe em arquivo externo, Construtor 
#include <iostream>
#include "aviao.h"

using namespace std;

int main(){

    Aviao *av1=new Aviao(3);
    Aviao *av2=new Aviao(1);
    Aviao *av3=new Aviao(2);

    av1->imprimir();



    return 0;
}