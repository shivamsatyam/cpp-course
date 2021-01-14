#include <iostream>
using namespace std;

class Base1{
	public:
		void greet(){
			cout<<"This is an Base1 greet method\n";
		}
};


class Base2{
	public:
		void greet(){
			cout<<"This is an Base2 greet method\n";
		}
};


class Derived:public Base1,public Base2{
	public:
		void greet(){
			// calling Base1 greet function
			Base1::greet();
		}
};


int main(){
	Base1 a;
	Base2 b;
	Derived c;
	a.greet();
	b.greet();
	c.greet();


	return 0;
}




























