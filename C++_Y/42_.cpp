#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector<int> num;
    vector<int> num2;

    int tam,i;

    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    //num[3]=1;

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8); 
    //num.swap(num2);

    tam=num.size();


    cout<<"Primeiro elemento de num: "<<num.front() << endl;
    cout<<"Último elemento de num..: "<<num.back() << endl;
    cout<<"Valor do meio...........: "<<num.at(tam/2) << endl;



    cout<<"Tamanho do vector: "<< tam <<endl;

    for(i=0;i<tam;i++){
        cout<<num[i] << " ";
    } 
    for(i=0;i<tam;i++){
        cout<<num2[i]<< " ";
    }

    return 0;
}
