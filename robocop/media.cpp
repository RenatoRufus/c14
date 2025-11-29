#include <iostream>

using namespace std;

int main(){

    float num1, num2, num3;
    float media {0.0};

    cout<<"Digite primeiro número: \n";
    cin>>num1;
    cout<<"Digite segundo número: \n";
    cin>>num2;
    cout<<"Digite terceiro número: \n";
    cin>>num3;

    media = (num1+num2+num3) / 3;
    cout<<"Números digitados "<< num1 <<" "<< num2 <<" "<< num3 <<"\n";
    cout<<"Media igual: "<< media <<"\n"; 
    



    return 0;
}
