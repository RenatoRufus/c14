#include <iostream>

int main(){

    namespace eixos{
        int x;
        int y;
        int z;
    }

    int main(){
        eixo::x = 4;
        eixo::y = 5;
        eixo::z = 3;

        std::cout<<"X:"<< eixos::x<<std::endl;

    }





    return 0;
}