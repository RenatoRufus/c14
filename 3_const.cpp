#include <iostream>


using namespace std;

int main(){
    /*
    \n
    \return
    \tab
    \backspace
    \single quote
    \double quote
    \\ backslash   
    */
//cout<<"Hello\tthere\nmy friend\n";

    cout<<"Hello, welcome to Rufu's carpet cleaning service"<<endl;
    cout<<endl;
    cout<<"How many rooms would you like cleaned?\n";
    cout<<"number? \n";


    int number_of_rooms {0};
    cin>>number_of_rooms;

    const double price_per_room{30.0};
    const double sales_tax{0.06};
    const int estimate_expiry{30}; //days

    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"Number of rooms: "<< number_of_rooms <<endl;

    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"Number of rooms: "<< number_of_rooms<<endl;
    cout<<"Price per room: $"<<price_per_room<<endl;
    cout<<"Cost: $"<< price_per_room * number_of_rooms<<endl; 
    cout<<"Tax: $"<<price_per_room * number_of_rooms *sales_tax<<endl;
    cout<<"====================================="<<endl;
    cout<<"Total estimate: $"<< (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax)<<endl;
    cout<<"This estimate is valid for "<< estimate_expiry <<" days"<<endl;   
    cout<<endl;

    return 0;
}