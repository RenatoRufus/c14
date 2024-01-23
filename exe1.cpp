#include <iostream>

using namespace std;

int main(){

    string name;
    int age{0};
    double hourly_wage {23.50};

    cout<<"Insert name , age \n";
    cin>>name;
    cin>>age;

    cout<< name <<" "<< age <<" "<< hourly_wage<<endl; 

    return 0;
}