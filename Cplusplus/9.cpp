#include <iostream>

using namespace std;

int main(){

    int num = 100, num2 = 50;
    char opc='s';

// se(teste lógico){               ( if -- se )
//  executa teste for verdadeiro }
// se não {
//   teste for falso}  
//  teste lógico   > , < , >= , <= , == , != 

    if (num > num2)
    {
        cout<<"Resultado verdadeiro\n\n";
        cout<< num <<"\n\n";
    }else{
        cout<<"Resultado falso\n\n";
        cout<< num2<<"\n\n";
    }


int sol = 1;  //Teste somente com "1 e 0"  falso verdadeiro

cout<<"Teste para ver se vai fazer sol\n\n";
if(sol){
    cout<<"Sol valor 1 = verdadeiro";
    }else{
        cout<<"Sol valor 0 = falso";
    }


    return 0;
}