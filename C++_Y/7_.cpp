//Incremento e Decremento de Variáveis, Operadores pós e pré-fixados

#include <iostream>

using namespace std;

int main(){

    int n1,n2;

    n1 =15;
    n2 =10;

    cout<< n1 <<"\n\n";
    //n1=n1+1;
    //n1*n1+10;
    //n1+n1-10;
    //n1=n1/2;
    //n1+=1;
    //n1-=1;
    n1++; //n--;
    cout<< n1 <<"\n\n";

    n1*=2;
    cout<< n1 <<"\n\n";

    int n3=1;
    cout<< n3 <<"\n\n";
    cout<< n3++ <<"\n\n";    
    cout<< n3 <<"\n\n";    


    return 0;
}