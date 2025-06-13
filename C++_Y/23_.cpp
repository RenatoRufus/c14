#include <iostream>

using namespace std;

//prototipar uma função
void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
    int res;
    string transp[4]={"carro","moto","Barco","aviao"};

    texto();
    soma(15,5);

    res=soma2(171,1);

    cout<<"Valor de res: "<< res <<"\n";
    cout<<"Valor de res: "<< soma2(1,25) <<"\n";

    tr(transp);



    /*
    for(int i=0; i < 10; i++){
        texto();
    }
    */

    return 0;
}

void texto(){

    cout<<"\nCanal fessor Bruno\n";

}


void soma(int n1, int n2){
    cout<<"soma dos valores: "<< n1+n2 <<"\n";

}

int soma2(int n1, int n2){
    return n1+n2;
}



void tr(string tra[4]){
    for(int i =0; i<4;i++){
        cout<< tra[i] <<"\n";
    }
}