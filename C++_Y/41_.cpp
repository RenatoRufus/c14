#include<iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;


int main(){


    int a=30;
    cout<<"Valor de a: "<< setw(10) << setfill('0') << a <<"\n";
    cout<< a <<"\n";

    float pi=M_PI;
    printf("Valor de pi: %07.1f",pi);
    printf("_Canal ");

    int num=5;
    printf("Valor de NUM: %07d",num);


    int num2=15;
    cout<<"\n Valor num2 dec: "<< num2 <<endl;
    cout<<"\n Valor num2 hex:"<< hex << num2 <<endl;
    cout<<"\n Valor num2 oc:"<< oct << num2 <<endl;
    cout<<"\n Valor num2 set:"<< setbase (16) << num2 <<endl;

    //float pi=M_PI;
    cout.precision(30);
    cout<<"Valor de PI: "<< pi <<"\n";
    cout.precision(-1);
    cout<<"Valor de PI: "<< pi <<"\n";
    cout<<"Valor de PI: "<< std::scientific<< pi <<"\n";

    

    return 0;
}
