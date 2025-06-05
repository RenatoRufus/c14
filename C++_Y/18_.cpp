#include <iostream>
//#18 - Array / Vetor

using namespace std;

int main(){

    int i, vetor[10];  //int vetor0, ..., vetor10   mesma coisa

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    for(i=0;i<5;i++){
            cout<< vetor[i] <<"\n";

    }



    return 0;
}