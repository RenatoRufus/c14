#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cartas;

    
    cartas.push("Rei e copas");
    cartas.push("Rei e espadas");
    cartas.push("Rei e ouros");
    cartas.push("Rei e paus");

    if(cartas.empty()){
        cout<<"Pilha vazia\n\n";
    }else{
        cout<<"Pilha com cartas\n\n";
    }

    while (!cartas.empty())
    {
        cartas.pop();
    }
    

    cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
    cout<<"Carta do topo: "<< cartas.top()<<"\n";

    cartas.pop();
    cartas.pop();

    cout<<"Nova carta do topo: "<< cartas.top() <<"\n";
    


    return 0;
}