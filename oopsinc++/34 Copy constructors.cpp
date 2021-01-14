#include<iostream>
#include<string>

using namespace std;
// constructor give a copy constructor to all the class 
//where there is no copy constructors the compiler provide it's own copy constructors
// 
class Number{
	int a;
	public:
		
		Number(){
			
		}
		Number(int b){
			a = b;
		}
		Number(Number &obj){
			a = obj.a;
			cout<<"Copy constructor called\n";
		}
		
		void display(){
			cout<<"The number for the object is "<<a<<endl;
		}
};


int main(){
	Number x,y,z(45),z2;
	x.display();
	y.display();
	z.display();
//	z1 should excatly resemble/like x
	Number z1(x); //Copy constructor called
	z1.display();
	
	z2 = y; //copy constructor does not called because the object z2 is prepared befor by the default constructor
	z2.display();
	Number z3 = z; // copy constructor is called/invoked 
	z3.display();
	return 0;

}



























































































































































































