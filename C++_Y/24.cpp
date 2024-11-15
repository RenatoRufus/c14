#include <iostream>

using namespace std;

void imp(string txt ="Renatus"); //Default caso omitido

int main(){
    //omissão argumentos, argumentos padrões

    imp ("renatus1");
    imp(); //imprime default



    return 0;
}

void imp(string txt){
    cout<<"\n"<< txt <<"\n"; 

}



