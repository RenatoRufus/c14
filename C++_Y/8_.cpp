/*
#08 - Invertendo valores de variáveis
*/

#include <iostream>

using namespace std;


int main(){

    int num = 10;
    cout<< num <<"\n\n";
    num = num * -1; //invertendo para -10
    cout<< num <<"\n\n";

    int num2 = 11;
    cout<< -num2 <<"\n\n"; //não grava na variável

    int num3 = 12;
    num3 -= 12;
    cout<< num3 <<"\n\n";

    int num4 = 13;
    num4 =- num4;
    cout<< num4 <<"\n\n";






    return 0;
}