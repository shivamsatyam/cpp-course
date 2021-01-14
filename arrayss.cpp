#include<iostream>
#include <iomanip>
using namespace std;
int main()  
{

    int marks[4] = {23,45,56,89};
    //we can also make array like that
    //1. int marks[] = {23,4,5,6,7};
    
        
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    /*printing array using for loop*/
    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks is "<<marks[i]<<endl;
    }
    
    /*using pointer for making array*/
    /*pointer arthimatic----------
    
    pointer(new) = point(current) + i*size of data type
    
    */

   
    int *pointer = marks;
    cout<<"the value of marks[0] is "<<*pointer<<endl;
    cout<<"the value of marks[0] is "<<*(pointer+1)<<endl;
    cout<<"the value of marks[0] is "<<*(pointer+2)<<endl;
    cout<<"the value of marks[0] is "<<*(pointer+3)<<endl;
    return 0;    
}





































