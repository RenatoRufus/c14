/*
#6 Variáveis Globais e Locais, Operadores matemáticos
*/

#include <iostream>

using namespace std;

    //var global 
    int n1,n2;

int main(){

    //operadores matemáticos: + - / * % ()

    // var locais
    int n3,n4;
    int res, res2;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res = n1+n2+n3+n4;
    cout<<"Soma: "<< res <<endl;

    res = (n1+n2+n3+n4) - 10;
    cout<<"Soma e subtração: "<< res <<endl;

    res = n1+n2*n4;
    cout<<"Soma e multiplicação: "<< res <<endl;


    res= n1/n2;
    res2=n1%n2;
    cout<<"divisão e resto: "<< res <<endl;
    cout<<"divisão e resto: "<< res2 <<endl;
    





    return 0;
}