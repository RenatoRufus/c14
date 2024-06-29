#include <iostream>

using namespace std;

int n1,n2; //variaveis globais

int main(){

    int n3, n4; //variaveis locais
    int res, res2;

    /*
    operadores matemáticos
    +
    -
    /
    *
    %
    ()
    */

   n1 = 11;
   n2 = 3;
   n3 = 5;
   n4 = 2;

   res = n1 + n2 + n3 + n4;
   cout<<"A soma de todas as variáveis é:\n"<< res <<"\n";

   res = (n1+n2+n3+n4) - 10;
   cout<<"Resultado: \n"<< res <<"\n";

   res = (n1 + n2) * n4;
   cout<<"Resultado 2 \n"<< res <<"\n";

   res = n1 / n2;
   res2 = n1 % n2;
   cout<<"res : \n"<< res <<"\n";
   cout<<"res2 : \n"<< res2 <<"\n"; 


    return 0;
}