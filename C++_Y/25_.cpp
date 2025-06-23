/*
#25 - Funções recursivas (recursividade)
função que chama a si mesma
*/
#include <iostream>

using namespace std;

void contador(int num);

int main(){

    contador(20);



    return 0;
}

void contador(int num){
    for(int i=0; i <=num; i++){
    cout<< i << "\n";
    }    
}
