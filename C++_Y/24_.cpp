#include <iostream>

using namespace std;

void imp(string txt="teste");

int main(){

//  imp("Re");
    imp();
    imp("Re");



    return 0;
}

void imp(string txt){
    cout<<"\n" << txt <<"\n";
}


