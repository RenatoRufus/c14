//wchar_t
#include <iostream>

using namespace std;

int main(){

    char caractere = '3';
    char caractere2 = 'k';

    cout<<"Caractere: "<< caractere  <<endl;
    cout<<"Tamanho caracter : "<< sizeof(caractere)<<"\n";
    cout<<"Endereço de memória: "<< (void *)&caractere<<"\n";


    cout<<"Caractere: "<< caractere2  <<endl;
    cout<<"Tamanho caracter : "<< sizeof(caractere2)<<"\n";
    cout<<"Endereço de memória: "<< (void *)&caractere2<<"\n";
    


    return 0;
}
