    //testar no windows s
    
    system("MODE CON: COLS=80 LINES=40");

    #include <iostream>
    #include <string>
    #include <iomanip>
     
    using namespace std;
     
    int main()
    {
        system("MODE CON: COLS=80 LINES=40"); // Já coloca a janela com 80 de largura e 40 altura 
        string str = "Texto Centralizado";
        int console_width = 80;// Largura do seu console.
        int len = str.length();// Tamanho da String
        cout << setw((console_width / 2) + len / 2) << str << endl;
        system("PAUSE");
    }