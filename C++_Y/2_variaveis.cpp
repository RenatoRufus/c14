#include <iostream>

using namespace std;

int main(){

    // tipo nome; 
    // tipo nome = valor;

    int vidas;          //10, 25, 1... 
    char letra = 'B';         // 1 bit 'b', 'c' 
    double decimal = 5.2;     //2.4999999 precisão maior 
    float decimal2 = 5.2;     //2.5       precisão menor  
    bool vivo = true;          //1 true verdadeiro / 0 false falso
    string nome = "Renatus";        // texto

    char texto[20];     //vetor 20 letras

    cout<<"verificando lixo da variavel não inicializada\n"<<endl;
    cout<< vidas <<"\n"<<endl;
    cout<<"letra" <<endl;
    cout<<"decimal\n" <<endl;
    cout<<"vivo\n"<< vivo <<endl;
    cout<<"nome" << nome <<endl;

    cout<<"Digite o número de vidas:\n";
    cin>> vidas;
    cout<< vidas <<endl;
    
    return 0;
}