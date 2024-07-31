#include <iostream>

using namespace std;

int main(){

    //AND / && / E
    //OR / || / OU

    int num;
    num = 5;

    if (num > 4 && num <7)
    {
        cout<<"\nValor aceito\n";
    }else{
        cout<<"\nValor não aceito\n";
    }

    int num2;
    num2 = 5;

    if(num2 < 3 || num2 >8){
        cout<<"\nValor aceito\n";
    }else{
        cout<<"\nValor não aceito\n";
    }

    int num3;
    num3 = 7;

    if((num3 >= 3 && num3 <= 6) || (num3 >4 && num3 <5) || (num3 > 2 && num3 < 4)){
        cout<<"\nValor aceito\n";
    }else{
        cout<<"\nValor não aceito";
    }


    int num10;
    num10 = 1;

    if(!num10){
        cout<<"\nVou ao clube\n";
    }else{
        cout<<"\nVou ao cinema\n";
    }



    return 0;
}