//the sizeof operator 

#include <iostream>
#include <climits>

/*
make sure you climits for integer types
similar information for floating point numbers
is contained in <cfloat>
*/

using namespace std;

int main(){

    cout<<"sizeof information"<<endl;
    cout<<"================================="<<endl;

    cout<<"char "<<sizeof(char)<<"bytes"<<endl;
    cout<<"int "<<sizeof(int)<<"bytes"<<endl;
    cout<<"unsigned "<<sizeof(unsigned)<<"bytes"<<endl;
    cout<<"short "<<sizeof(short)<<"bytes"<<endl;
    cout<<"long "<<sizeof(long)<<"bytes"<<endl;
    cout<<"long long "<<sizeof(long long)<<"bytes"<<endl;

    cout<<"================================="<<endl;

    cout<<"float "<<sizeof(float)<<"bytes"<<endl;
    cout<<"double "<<sizeof(double)<<"bytes"<<endl;
    cout<<"long double "<<sizeof(long double)<<"bytes"<<endl;

    //use values defined in <climits>
    cout<<"================================="<<endl;
    cout<<"Minimum value: "<<endl; 
    cout<<"char: "<<CHAR_MIN<<"bytes"<<endl;
    cout<<"int: "<<INT_MIN<<"bytes"<<endl;
    cout<<"short: "<<SHRT_MIN<<"bytes"<<endl;
    cout<<"long: "<<LONG_MIN<<"bytes"<<endl;
    cout<<"LONG LONG: "<<LLONG_MIN<<"bytes"<<endl;
    
    cout<<"================================="<<endl;
    cout<<"Maximum value: "<<endl; 
    cout<<"char: "<<CHAR_MAX<<"bytes"<<endl;
    cout<<"int: "<<INT_MAX<<"bytes"<<endl;
    cout<<"short: "<<SHRT_MAX<<"bytes"<<endl;
    cout<<"long: "<<LONG_MAX<<"bytes"<<endl;
    cout<<"LONG LONG: "<<LLONG_MAX<<"bytes"<<endl;
    cout<<"================================="<<endl;
    cout<<"sizeof using variable names"<<endl;
    
    int age{21};
    cout<<"age is "<<sizeof(age)<<"bytes"<<endl;
    //or
    cout<<"age is "<<sizeof age <<"bytes"<<endl;


    double wage{22.21};
    cout<<"age is "<<sizeof(wage)<<"bytes"<<endl;
    //or
    cout<<"age is "<<sizeof wage<<"bytes"<<endl;



    return 0;
}