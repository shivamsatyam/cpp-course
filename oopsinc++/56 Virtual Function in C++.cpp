#include<iostream>
using namespace std;

class Base{
	public:
		int var1=1;
		virtual void display(){
			cout<<"1 Displaying the base class variable "<<var1<<endl;
		}
	 
};

class Derived:public Base{
	public:
		int var2=2;
		void display(){
			cout<<"2 Displaying the base class variable "<<var1<<endl;
			cout<<"2 Displaying the Derived class variable "<<var2<<endl;
			
		}
	
};
int main(){
	Base *baseptr;
	Derived derptr;
	baseptr = &derptr; // Points base class pointer to derived class object
	
//	baseptr->display(); // This will call Base class display() function because baseptr is a pointer of type Base but if the Base display() function is virtual function then it called Derived class display() method
	
	/*Derived class display() function called because Base class display() function is virtual*/
	baseptr->display();
	return 0;

}




























































































































































































