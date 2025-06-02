#include<iostream>

using namespace std;

int main(){

    int n=0;
    int cont=0;

    while( cont++<20){
        cout<< "Canal " << cont <<"\n";
        //n++;
        //cin>>n;
        //cont++;
        //cont+=2;
        if(cont == 10){
            break;
        } 
    }
    cout<<"\nRotina finalizada\n";

    return 0;
}
