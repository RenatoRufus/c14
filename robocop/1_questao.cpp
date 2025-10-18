#include <iostream>
#include <string>

//using namespace std;

int main(){

    std::cout<<"Vou aprender na linguagem c++"<<std::endl;
    std::cout<<"Vou"<<std::endl
    <<"linha"<<std::endl
    <<"linha2"<<std::endl;
    std::cout<<"Teste \n";

        // Definindo as sequências ANSI como constantes para facilitar o uso
    const std::string VERMELHO = "\033[31m";
    const std::string VERDE = "\033[32m";
    const std::string AMARELO = "\033[33m";

    std::cout<< VERMELHO <<"Este texto é vermelho." <<std::endl;
    std::cout << VERDE << "Este texto está em verde." << std::endl;
    std::cout << AMARELO << "Este texto está em amarelo." << std::endl;

    std::cout << "\033[1;31mbold red text\033[0m\n";

    /*
     foreground background
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45
cyan         36         46
white        37         47

reset             0  (everything back to normal)
bold/bright       1  (often a brighter shade of the same colour)
underline         4
inverse           7  (swap foreground and background colours)
bold/bright off  21
underline off    24
inverse off      27   
    
    
    
    */


    std::cin.get();
    //system("PAUSE");

    return 0;
}