//Arrays

#include <iostream>

using namespace std;

int main(){
    
    char vowels[] {'a','e','i','o','u'};

    cout<<"\nThe first vowel is: "<<vowels[0]<<endl;
    cout<<"The vowel is: "<<vowels[1]<<endl;
    cout<<"The vowel is: "<<vowels[2]<<endl;
    cout<<"The vowel is: "<<vowels[3]<<endl;
    cout<<"The last vowel is: "<<vowels[4]<<endl;

    //error   cin>> vowels[5];  don't do this!!!

    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout<<"\nThe fist high temperature is :" <<hi_temps[0]<<endl;

    hi_temps[0] = 100.7;

    cout<<"The first high temperature is now: "<<hi_temps[0]<<endl; 

//

//int test_score[5];  don't do this!!!  garbage memory

int test_scores[5] {}; //inicia todos com zero

cout<<"\nScore 0 :" << test_scores[0]<<endl;
cout<<"\nScore 1 :" << test_scores[1]<<endl;
cout<<"\nScore 2 :" << test_scores[2]<<endl;
cout<<"\nScore 3 :" << test_scores[3]<<endl;
cout<<"\nScore 4 :" << test_scores[4]<<endl;

cout<<"\nEnter 5 scores"<<endl;
cin>> test_scores[0];
cin>> test_scores[1];
cin>> test_scores[2];
cin>> test_scores[3];
cin>> test_scores[4];

cout<<"\n###The update array is: ###"<<endl;
cout<<"\nScore 0 :" << test_scores[0]<<endl;
cout<<"\nScore 1 :" << test_scores[1]<<endl;
cout<<"\nScore 2 :" << test_scores[2]<<endl;
cout<<"\nScore 3 :" << test_scores[3]<<endl;
cout<<"\nScore 4 :" << test_scores[4]<<endl;

cout<<"\nNotice what the value of the arrayname is: "<< test_scores<<endl;
cout<<endl;

    return 0;
}