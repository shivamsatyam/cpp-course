#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    //what is a pointer--> data types which holds the address of other data types
    
    int a=3;
    int * b=&a;
    //int * is a pointer
    //& -----------> address of operator
    //* ------------> Dereference operator

    // cout<<b; // it is the address of a in b

    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of b as term of a is "<<b<<endl;

    cout<<"for find the value of a  pointer at a given address"<<endl;

    cout<<"the value of a at a given address b is  "<<*b<<endl;

    int **c = &b; //it store pointers value at the given address 




    return 0;
}






















//6201680942    








