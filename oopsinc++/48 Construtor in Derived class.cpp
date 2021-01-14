#include <iostream>
using namespace std;

/*

case 1:

class A:public B{ order===> B()-> A()}

case 2:

class A:public B,public C{

//order of execution B()-->C()--->A()

}

case 3

class A:public B:virtual public C{

order of execution   C()-->B()-->A()

}
*/

class Base1{
	int data1;
	public:
		Base1(int i){
			data1 = i;
			cout<<"Base class constructor called\n";
		}
		void print1(){
			cout<<"The value of Base1 data1 is "<<data1<<endl;
		}
};


class Base2{
	int data2;
	public:
		Base2(int i){
			data2 = i;
			cout<<"Base2 class constructor called\n";
		}
		void print2(){
			cout<<"The value of Base2 data2 is "<<data2<<endl;
		}
};


class Derived:public Base1,public Base2{
	int derived1;
	int derived2;
	
	public:
		Derived(int a,int b,int c,int d):Base1(a),Base2(b){
			derived1 = c;
			derived2 = d;
			cout<<"Derived class constructor called\n";
		}
		void print3(){
		cout<<"The value of Derived  is "<<derived1<<" "<<derived2<<" "<<endl;
		}	
};


int main(){
	
	Derived shivam(1,2,3,4);
	
	shivam.print1();
	shivam.print2();
	shivam.print3();
	
		
	return 0;
}




























