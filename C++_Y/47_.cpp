//POO, Classes, Herança
#include <iostream>
#include "classes2.h"

using namespace std;

int main(){

    Moto *v1=new Moto();
    v1->imp();
    //cout<< v1-> rodas;

    Carro *v2= new Carro();
        v2->imp();


    v1->imp();

    return 0;
}
