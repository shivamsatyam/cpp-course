#include<iostream>
using namespace std;

class Base{
	public:
		int var1;
		void display(){
			cout<<"Displaying the base class variable "<<var1<<endl;
		}
	 
};

class Derived:public Base{
	public:
		int var2;
		void display(){
			cout<<"Displaying the base class variable "<<var1<<endl;
			cout<<"Displaying the Derived class variable "<<var2<<endl;
			
		}
	
};
int main(){
	//Runtime Polymorphism
	Base *basepointer; // Points to base class pointer
	Base objbase;
	Derived objderived;
	basepointer = &objderived; // Base class pointer point to the derived class objects
	
	basepointer->var1 = 45; // Base class variable will be changed
	//basepointer will called only base class function
	basepointer->display(); // This will call the display function of the base class because the pointer is of base class This is called late binding
//	basepointer->var2 = 4; // This will show an error because var2 is the variable of derived class not the base class
	
	// This will acces both Base and Derived class public method and variable because the pointer d is a derived type pointer
	Derived *d = &objderived;
	d->var2 = 75;
	d->display();
	
	return 0;

}




























































































































































































