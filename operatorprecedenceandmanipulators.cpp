#include <iostream>
#include <iomanip>/*"iomanip" is imported to used "setw" it is used to take space.*/
using namespace std;

int main()
{

    int a = 34;
    cout << "the value  of a" << a << endl/*"endl" it is also a manipulators.*/;
    a = 45;
    cout << "the value  of a" << a << endl;
    //constants in c++ we cannot change constanst variable in c++
    // for making constants we use const variable
    const float/*it is an definet value editor by using "const float, const int & const char".*/ rat = 65.78;

    // --------------Manipulators----------------------------
    //mainly two types of manipulators
    //endl is used for break
    //setw is imported from iomanip see line 2

    // using setw manipulaters
    int x = 56, y = 67, z = 89;

    cout << "The value of x without setw is " << x << endl;
    cout << "The value of y without setw is " << y << endl;
    cout << "The value of z without setw is " << z << endl;

    //using setw function
    cout << "The value of x with setw is " << setw(7) << x << endl;
    cout << "The value of y with setw is " << setw(7) << y << endl;
    cout << "The value of y with setw is " << setw(7) << z << endl;
    //setw function is used to make the which on which our number display Ex setw(7) means that the number takes only 7 width

    /*------------operator precedence--------------*/
    // go to en.cpprefrence website
    /*int a = 3, b = 4;*/
    //int c =(a*5)+b;
    //int c = ((((a*5)+b)-45)+87)

    return 0;
}
