#include <iostream>

using namespace std;

int main(){
    //array - vetores

    int vetor[5];
    //int vetor0, vetor1, vetor2 ... vetor5

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;  //incluiu para retirar erro
    
    cout<< vetor[0] << "\n";

    //erro vetor5  array até vetor[4] cinco não existe
    //cout<< vetor[5] <<"\n";

    int i;
    for(i = 0; i < 5; i++){
        cout<< vetor[i] <<"\n";
    }

    
    return 0;
}