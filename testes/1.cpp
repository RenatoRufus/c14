#include <iostream>

using namespace std;

int main(){
    int m, n1,n2,n3;

    cout<<"Digite nota1\n";
    cin>>n1;
    cout<<"Digite nota1\n";
    cin>>n2;
    cout<<"Digite nota1\n";
    cin>>n3;

    m = (n1+n2+n3)/3;
    

    if(m < 3){
        cout<<"\nReprovado\n\n";
    }else if(m >7){
        cout<<"\nAprovado\n\n";
    }else{
        cout<<"\nExame\n\n";
    }

   cout<<"Sua média é:..."<< m <<endl;
    
   return 0;
}