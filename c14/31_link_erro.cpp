//erro de link

#include <iostream>

extern int x; //erro link

int main(){
    std::cout<<"Hello world"<< std::endl;
    std::cout<< x;

    return 0;
}