#include<iostream>
#include <iomanip>
using namespace std;




int sum(int a,int b){
    int c = a+b;
    return c;
}
// this will does not swap a and b

void swap(int a,int b){ //temp a b
    int temp = a;       //4    4 5     
    a=b;                //4    5 5 
    b=temp;             //4    5 4
}

//call by refernce
void swappointer(int* a,int* b){ //temp a b
    int temp = *a;       //4    4 5     
    *a = *b;                //4    5 5 
    *b = temp;             //4    5 4
}


//call by refernce variable in c++
void swapReference(int &a,int &b){ //temp a b
    int temp = *a;       //4    4 5     
    *a = *b;                //4    5 5 
    *b = temp;             //4    5 4
}

int main(){
    int x = 4, y=8;
    // cout<<"the sum of 4 and 8 is  "<<sum(x,y)<<endl;
    // cout<<"the value of a is "<<x<<"and b is "<<y<<endl;
    // swap(a,b); //this does not work
    swappointer(&x,&y);
    cout<<"the sum of 4 and 8 is  "<<sum(x,y)<<endl;
    cout<<"the value of a is "<<x<<"and b is "<<y<<endl;
    swapReference(x,y);
    cout<<"the value of x is "<<x<<"and y is "<<y<<endl;
    
    return 0;
}