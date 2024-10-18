#include <iostream>

using namespace std;

int main(){

int vetor [5];

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    
    int b;
    for(b = 0; b < sizeof(vetor)/4; b++){
        cout<< vetor[b] <<"\n";
    }



    return 0;
}