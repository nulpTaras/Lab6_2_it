#include <iostream>
#include "functions.cpp"
using namespace std;

int main() {

    srand(unsigned(time(NULL)));

    int *t;
    create(t,10,1,100);
    cout<<"початковий : "<<endl;
    print(t , 10);


    swapHalves(t,10);
    cout<<"\nвідформатований   : "<<endl;
    print(t , 10);



    delete []t;
    return 0;

}




