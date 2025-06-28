#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> cartas;

    
    cartas.push("Rei e copas");
    cartas.push("Rei e espadas");
    cartas.push("Rei e ouros");
    cartas.push("Rei e paus");

    while (!cartas.empty())
    {
        cartas.pop();
    }
    

    cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
    cout<<"Carta do topo: "<< cartas.top()<<"\n";

    /*
    push();
    pop();
    top();
    size();
    empty();
    */

    return 0;
}