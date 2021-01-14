#include<iostream>
#include <iomanip>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}

// what is function protype

// int sub(int c,int d);
//we can also give this
int sub(int,int);
void pr(void);//pr(void) void is optional
int main(){
    int num1,num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num1;
    cout<<"the sum of two number is "<<sum(num1,num2)<<endl;
    cout<<"the subtract  of two number is "<<sub(num1,num2);
    pr()
    return 0;   
}



int sub(int c,int d){
    int e= c-d;
    return e;
}



void pr(){
    cout<<endl<<"good morning"<<endl;
}












