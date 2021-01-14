#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public:
		void setNumber(int n1,int n2){
			a = n1;
			b = n2;
		}
		//below lines means that non member sumcomplex function is allowed to do anything with my private parts
		friend Complex sumComplex(Complex o1,Complex o2);
		void PrintNumber(){
			 cout<<"your number is"<<a<<" + "<<b<<"i"<<endl<<endl;
		}
};

Complex sumComplex(Complex o1,Complex o2){
	Complex o3;
	o3.setNumber(o1.a+o2.a, o1.b+o2.b);
	return o3;
}

int main(){
	Complex c1,c2,sum;
	c1.setNumber(1,4);
	c2.setNumber(5,8);
	c1.PrintNumber();
	c2.PrintNumber();

	sum = sumComplex(c1,c2);
	sum.PrintNumber();

return 0;
}
/*
 Properties of friend functions
 1. not in the scope of a class
 2. since it is not in the scope of the class, it cannot be called from the object of that class.
    c1.sumcomplex() == Invalid;
 3. Can be invoked without the help of any object
 4. usually contains the arguments a objects
 5. Can be decelared inside public or private section of the class
 6. it cannot access the members directly by their names and need object_nam.member_name to access the member;   
 
 
 
*/














