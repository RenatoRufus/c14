/*
 #28 - Pilha / Stack
*/
#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cartas;
    
    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouro");
    cartas.push("rei de paus");

    cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
    cartas.pop();
    cartas.pop();

    cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";

    cout<<"Carta do topo: "<< cartas.top() <<"\n";

    return 0;
}
