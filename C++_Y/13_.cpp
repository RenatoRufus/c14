#include<iostream>

using namespace std;

int main(){

    int val,val2;

    cout<<"Selecione uma cor\n";
    cout<<"1 - verde, 2 - azul, 3 vermelho, 4 - cor amarelo (ovo ou ouro ),  5 e 6 surpresa\n";

    cin>>val;

    switch (val)
    {
    case 1:
        cout<<"Cor selecionada: verde\n";
        break;
    case 2:
        cout<<"Cor selecionada: azul\n";
        break;
    case 3:
        cout<<"Cor selecionada: vermelho\n";
        break;
    case 4:
          cout<<"Selecione 1-ovo, 2-ouro\n";
          
          switch(val2){
          case 1:
          cout<<"Ovo selecionado\n";
          break;
          case 2:
          cout<<"Ouro selecionado\n";
          break;  

          }
          break;

    case 5:
    case 6:
    cout<<"Cor de burro\n;";
    break;    
    
    default:
        cout<<"Cor selecionada inválida\n";
        break;
           
    }

    cout<<"Programa finalizado!!!\n";


    return 0;
}