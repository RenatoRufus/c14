#include <iostream>

using namespace std;

int main(){

    char middle_initial{'J'};
    cout<<"My middle initial is " <<middle_initial<<endl;

    unsigned short int exam_score{55};
    cout<<"My exam score was "<< exam_score<<endl;

    int coutries_represented {65};
    cout<<"there were "<< coutries_represented<<"countries"<<endl;

    long people_in_florida{20510000};
    cout<<"There are about "<< people_in_florida<< "florida"<<endl;

    long people_on_earth{7'600'000'000};
    cout<<"There are about " << people_on_earth << "people on earth"<<endl;
    //testando outra forma de inicializar variável
    //int people_on_earth2 = 7'600'000'000;
    //cout<<"*****There are about***** " << people_on_earth << "people on earth"<<endl;

    long long distance_alpha_century{9'461'000'000'000};
    cout<<"The distance to alpha century is "<< distance_alpha_century<<endl;


    float car_payment {401.23};
    cout<<"My car payment is "<<car_payment<<endl;

    double pi {3.14159};
    cout<<"Pi is "<<pi<<endl;

    long double large_amount {2.7e120};
    cout<<large_amount<<" is big number"<<endl;

    bool gameOver {false};
    cout<<"The value of gameOver is "<<gameOver<<endl;

    //overflow exemple
    short value1 {30000};
    short value2 (1000);
    short product{value1 * value2};

    cout<<"The sum of "<< value1 << " and "<< value2<<" is "<< product<<endl; 
 



    return 0;
}