#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]){
    //argc    armazena quantidade de argumentos 
    //argv    armazena os argumentos

//    cout<<argv[2] <<"\n\n";
//    cout<<argc <<"\n\n";
    if(argc > 1){
        if(!strcmp(argv[1],"sol")){
            cout<<"Vou ao club.\n\n";
        }else if(!strcmp(argv[1],"nublado")){
            cout<<"Vou ao cinema.\n\n";
        }else{
            cout<<"Vou ficar em casa\n\n";
        }
    }




    return 0;
}