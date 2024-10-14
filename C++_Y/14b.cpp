#include <iostream>

using namespace std;

int main(){
    //Laço while

    int n=0;

    while (n<10)
    {
        cout<< n <<"\n"<<endl;
        cin>>n;
    }

    cout<<"Rotina finalizada\n";

    int cont = 0;
    while (cont < 20)
    {
        cout<<"Cont é menor que 20\n"<< cont <<endl;
        cont++;
    }
    cout<<"Cont chegou a 20\n";


    return 0;
}