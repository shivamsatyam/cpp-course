#include<iostream>
using namespace std;


class Base1{
    protected:
        int num1;
    public:
        void set1(int a){
            num1 = a;
        }
};


class Base2{
    protected:
        int num2;
    public:
        void set2(int a){
            num2 = a;
        }
};

class Derived:public Base1,public Base2{
    public:
        void show(){
            cout<<"The value of first is "<<num1<<"The value of second is "<<num2<<endl;
        }
};


int main(){
    Derived shiv;
    shiv.set1(4);
    shiv.set2(5);
    shiv.show();
    
    return 0;
}