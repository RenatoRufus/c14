#include <iostream>

using namespace std;

int main(){

    int n1,n2, res;
    char opc;

    inicio:

    cout<<"Digite a nota A1\n";
    cin>>n1;
    cout<<"Digite a nota A2\n";
    cin>>n2;

    res = n1+n2;

    if(res >= 60){
        cout<<"Aprovado\n";
    }else if(res >= 40){
        cout<<"\nRecuperação\n";
    }else{
        cout<<"\nReprovado\n";
    }

    cout<<"Deseja digitar outras notas?[a/n]:";
    cin>>opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
    }
            



    return 0;
}