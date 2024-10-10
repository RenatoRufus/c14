#include <iostream>

using namespace std;

int main(){
    //switch case

    int val;
    cout<<"Selecione uma cor\n";
    cout<<"[1]=verde, [2]=azul, [3]=vermelho, [456]=cor de burro quando foge\n";
    cin>>val;

    switch (val)
    {
    case 1:
        cout<<"\nCor verde selecionada\n";
        break;
    case 2:
        cout<<"\nCor azul selecionada\n";
        break;    
    case 3:
        cout<<"\nCor vermelho selecionada\n";
        break;
    case 4:
    case 5:
    case 6:
        cout<<"\nCor burro quando foge selecionada\n";
        break;    
    default:
        cout<<"\nNão foi inserido um valor válido\n";
        break;
    }

    cout<<"\n\nPrograma finalizado\n";

    return 0;
}
