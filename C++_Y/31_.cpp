#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> aula, canal;
    int tam;

    list<int>::iterator it;


    tam = 10;
    for(int i=0; i < tam; i++){
        aula.push_back(i);
    }

    /*
    it=aula.begin();
    advance(it,7);
    aula.insert(it,0);
    */

    aula.sort();
    aula.reverse();


    cout<<"Tamanho da lista: "<<aula.size()<<"\n";

    tam=aula.size();
    for(int i=0; i < tam; i++){
        cout<< aula.front()<<"\n";
        aula.pop_front();
    }    



    return 0;
}