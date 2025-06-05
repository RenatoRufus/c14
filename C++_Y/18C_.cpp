#include <iostream>
//#18 - Array / Vetor

using namespace std;

int main(){

    int tam=11;
    int vetor[tam];
    int i;

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    vetor[5] = 10;
    vetor[6] = 20;
    vetor[7] = 30;
    vetor[8] = 40;
    vetor[9] = 110;
    vetor[10] = 111;

    for(i=0;i<tam;i++){
            cout<< vetor[i] <<"\n";

    }



    return 0;
}