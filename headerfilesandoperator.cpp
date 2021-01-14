#include <iostream>
// there are two types of header files
/*
1. System header files => it comes with the compiler Ex #include<iostream>
2. User defined header files => this is writeen by programmer Ex # include "this.h"

*/
// # include "this.h"

using namespace std;

int main()
{
    int a = 5, b = 6;
    
    cout << "operators in c++:" << endl; //endl is used for jumping in new line
    cout << "following are the types of operator\n";
    //1. Arthimatic operator => +,-,*,/,%,++,--
    cout << "the vaue of a + b is " << a + b << endl;
    cout << "the vaue of a - b is " << a - b << endl;
    cout << "the vaue of a * b is " << a * b << endl;
    cout << "the vaue of a / b is " << a / b << endl;
    cout << "the vaue of a % b is " << a % b << endl;
    cout << "the vaue of a++  is " << a++ << endl;
    cout << "the vaue of b++  is " << b++ << endl;
    cout << "the vaue of a--  is " << --a << endl;
    cout << "the vaue of b--  is " << --b << endl;
    cout<<"\n\n\n";
    
    //assignment operators
    // int sd=4;
    // char r='r';
    cout<<"comparsion operator\n\n";
    //comparision operator
    cout << "the value of a==b is" << (a == b) << endl;
    cout << "the value of a!=b is" << (a != b) << endl;
    cout << "the value of a>b is" << (a > b) << endl;
    cout << "the value of a<b is" << (a < b) << endl;
    cout << "the value of a<=b is" << (a <= b) << endl;
    cout << "the value of a>=b is" << (a >= b) << endl <<endl;

    //logical operators
    cout <<"this is an 'and' logical operator written as &&"<<((a==b) && (a>b))<<endl;
    cout <<"this is an 'or' logical operator written as ||"<<((a==b) || (a>b))<<endl;
    cout <<"this is an 'not equal to' logical operator written as !"<<(!(a==b))  <<endl;


    return 0;
}




































