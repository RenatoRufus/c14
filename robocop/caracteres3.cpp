#include <iostream>
#include <locale>
#include <clocale>
// versão linux
int main() {
    // Define o locale do programa para o locale do sistema, que deve ser UTF-8 no Linux.
    // Isso permite que wcout converta corretamente a saída para UTF-8.
    std::locale::global(std::locale(""));
    // Alternativamente, você pode usar setlocale(LC_ALL, "C.UTF-8"); na interface C,
    // que funciona na maioria dos sistemas.
    // std::setlocale(LC_ALL, "C.UTF-8");

    // Imprime o caractere de marca registrada (®) usando std::wcout.
    // O literal L"\u00AE" representa o caractere Unicode.
    std::wcout << L"\u00AE" << L'\n';
    std::wcout << L"\u1101" << L'\n';
    std::wcout << L"\u1010" << L'\n';
    
    /*
    \uXXXX	Caractere Unicode de 16 bits (XXXX é o código hexadecimal)
    \UXXXXXXXX	Caractere Unicode de 32 bits (XXXXXXXX é o código hexadecimal)
    */
    
 
    return 0;
}