#include <iostream>

#define NUM_VIDAS 10

/*
O Objetivo destas Namespaces é criar uma região que seja identificada 
de forma que você possa referenciar ela sem correr o risco de conflitos 
de nomes como no exemplo acima

exemplo:
    #include <iostream>
    //As duas bibliotecas que tem funções com a mesma assinatura ----> nome soma, utilizando namespace não haverá 
    //conflito
    #include "Biblioteca01.h"
    #include "Biblioteca02.h"
     
    int main()
    {
    	std::cout << "A Soma de 10 com 20: " << mat01::Soma(10, 20) << "\n";
    	std::cout << "A Soma de 10 com 20*2: " << mat02::Soma(10, 20) << "\n";
    	system("PAUSE");
    	return 0;
    }

*/

using namespace std;

int main(){

    const int num_vidas = 10;
    int total_de_vidas;
    total_de_vidas = num_vidas - 1;

    cout<<"total vidas :"<< num_vidas <<"\n : "<< total_de_vidas<<endl; 
    cout<<"Conferindo endereço de memória NUM_VIDAS: " << &num_vidas <<endl;
    cout<<"Conferindo endereço de memória total_de_vidas: "<< &total_de_vidas <<endl; 


    return 0;
}