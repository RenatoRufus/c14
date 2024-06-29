#include <iostream>

using namespace std;

int main(){
    int num = 10, num2 =50;
    char opc = 's';

/*
(if -- se)    
se ( teste lógico){
executa teste for verdadeiro
} se não { teste caso falso}
teste lógico
> , < , >= , <= , == , !=
*/

if( num > num2){
    cout<<"Resultado verdadeiro" << num <<"\n";
}else{
    cout<<"Resultado falso"<< num2 <<"\n";
}

int sol = 1; //Teste somente com '1 e 0'  falso e verdadeiro

if(sol){
    cout<<"Sol verdadeiro";
}else{
    cout<<"Sol falso";
}


    return 0;
}