#include<iostream>
#include<string.h>
using namespace std;


class A{
	int a,q;
	public:
		void setdata(int a){
//			a = a; // This gives a garbage value
			this->a = a; //this is a pointer which points to the object of a class this->a a is the class variable
		}
		void print(){
			cout<<"The value of Class A a is "<<a<<" "<<q<<endl;
			
		}
		//this pointer helps to return an object 
		A& ret(int q){ // A& means we return the address of an object
			this->q = q;
			return *this;
		}
};


int main(){
	A a;
	a.setdata(6);
	a.print();
	
	a.ret(7).print(); // we directly call the print function because this pointer return an object
	return 0;
}






















































































































