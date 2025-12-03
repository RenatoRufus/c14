#include <iostream>

/*
precedencia operadores
((a*b)/c)%d
*/

using namespace std;

int main(){

    int num1, num2, num3, num4;
    int resultado, soma, multiplica;

    num1 = (100+16);
     num2 = (2*4);
      num3 = ((num1 + num2) / 2);
       num4 = num3 * 5;
    cout<<"Resultado num1 : \n"<< num1<<endl;
    cout<<"Resultado num2 : \n"<< num2<<endl;
    cout<<"Resultado num3 : \n"<<num3<<endl;
    cout<<"Resultado num4 : \n"<<num4 <<endl;

    return 0;
}