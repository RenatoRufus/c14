#include <iostream>
//#18 - Array / Vetor

using namespace std;

int main(){

    int i, vetor[11];  //int vetor0, ..., vetor10   mesma coisa

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

    for(i=0;i<sizeof(vetor)/4;i++){
            cout<< vetor[i] <<"\n";

    }



    return 0;
}