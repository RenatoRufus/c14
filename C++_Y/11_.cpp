//#11 - Operadores AND, OR, NOT
#include <iostream>

using namespace std;

int main(){

    int num,num2,num3,num4;

    num=8;

    if(num >4 && num <7){          //and
        cout<<"\nValor aceito\n";
    }else{
        cout<<"\nNão aceito\n";
    }

    num2=5;

    if(num2 <3 || num2>8){          //or   ou
        cout<<"\nValor aceito\n";
    }else{
        cout<<"\nNão aceito\n";
    }

    num3= 12;

    if((num3 >=3 && num3<6) || (num3 >9 && num3 < 15) || (num3 >15 && num3 <20)){          //and
        cout<<"\nValor aceito\n";
    }else{
        cout<<"\nNão aceito\n";
    }

    num4=1;
    
    if (!num4)
    {
       cout<<"\nVou ao clube\n";
    }else{
        cout<<"\nVou ao cinema\n";
    }
    

    return 0;
}