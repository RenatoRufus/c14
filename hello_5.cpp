#include <iostream>

using namespace std;

int main(){

    cout<<"Hello world!"<<endl;
    cout<<"Hello"<<"World"<<endl;
    cout<<"Hello"<<"world!\n";
    cout<<"Hello\nOut\nThere\n";

    int num1, num2;
    double num3;

    cout<<"Enter an intereger: ";
    cin>> num1;
    cout<<"You entered: "<< num1 << endl;

    cout<<"------------------------------------------"<<endl;

    cout<<"Enter a first intereger: ";
    cin>>num1;

    cout<<"Enter a second intereger: ";
    cin>>num2;

    cout<<"You entered " << num1 <<" and " << num2 <<endl;    
    cout<<"------------------------------------------"<<endl;

    cout<<"Enter 2 integers separated whith a space:";
    cin>>num1>>num2;
    cout<<"You entered " << num1 <<" and " << num2<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Enter a double: ";
    cin>>num3;
    cout<<"You entered: "<< num3 <<endl; 
    cout<<"------------------------------------------"<<endl;
    cout<<"Enter an integer: ";
    cin>>num1;

    cout<<"Enter a double: ";
    cin>>num3;

    cout<<"The integer is: "<< num1<<endl;
    cout<<"And the double is "<< num3<<endl;


    return 0;
}