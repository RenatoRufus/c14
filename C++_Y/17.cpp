#include <iostream>

using namespace std;

int main(){
    //loop for
    int x,y,z;
    for(int tmp=0; tmp < 10000; tmp++)
     for(x=0, y=1, z=0; x <=10 && z<= 6; x++, y+=2, z+=2){
        cout<< x <<" - " << y << " - " << z << "\n";
     }

     return 0;
}