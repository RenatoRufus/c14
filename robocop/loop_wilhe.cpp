#include <iostream>
#include <iomanip> //necessário para uso do set precision

using namespace std;

int main(){

    float num1, num2, num3;
    float media = 0.0;
    char resposta;

    do  //cria loop até que resposta seja S e sai do loop
    {
        cout << "Digite o Primeiro Número: ";
		cin >> num1;
		cout << "Digite o Primeiro Número: ";
		cin >> num2;
		cout << "Digite o Primeiro Número: ";
		cin >> num3;
 
		media = (num1 + num2 + num3) / 3;

        cout << "Números Digitados: " << num1 << " " << num2 << " " << num3 << "\n";
		cout << "Média dos Números: " << std::fixed << std::setprecision(2) << media << "\n";
		cout << "\nDeseja calcular outra Média Artmética? (Responda S para Sim e N para não:) ";
        cin>> resposta;
    } while (resposta == 'S' || resposta == 's');
    std::cout << "\nSaindo do programa...";
    



    return 0;
}



