#include <iostream>
using namespace std;

/**
 * @brief The study summary
 * 9/19/2021, stop at Variable Type, study the usage af extern and extern C
 * 
 */
 

int main(){

    enum {a, b, c} o;
    o=a;
    if (o==a){
        typedef int feet;
        feet i= 0;
        cout << "Size of the feet :"<< sizeof(i)<<endl;
        cout << "Size of the o : "<< sizeof(o) << endl;
    }
    
    cout<<"Hello World";
    return 0;
}