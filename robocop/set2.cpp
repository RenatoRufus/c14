#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main(){

    string str = "Texto Centralizado";
    int console_width = 120; // Largura do seu console
    int len = str.length(); //Tamanho da String
    cout<< setw((console_width / 2) + (len /2)) << str <<endl;
    //ou seja o mesmo que 120/2 = 60 ou setw(60);


    return 0;
}
