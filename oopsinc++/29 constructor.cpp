#include<iostream>
#include<string>

using namespace std;

class Complex{
	int a,b;
	//creating a contructor
	public:
		Complex(int x,int y);
		void print(){
			cout<<"The number is "<<a<<" + "<<b<<"i\n";
		}
};
//Complex::Complex(void){ // This is a default construct
//	a = 10;
//	b = 4;
//}

Complex::Complex(int x,int y){
	a = x;
	b = y;
}

int main(){
	Complex c(10,2);
	c.print();


return 0;

}

//Constructor
/*
1. It should be declared in the public section of the class
invoked
They do not have return types and they do not value
we cannot refer to their address
It can have default arguments

*/ 


























































































































































































