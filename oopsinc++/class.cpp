#include<iostream>
#include<string.h>
using namespace std;

class complex{
	int a,b;
	public:
		
		void setnum(int x,int y){
			a = x;
			b = y;
		}
		
		friend complex sumComplex(complex o1,complex o2);
		
		void print(){
			cout<<"your number is "<<a<<" + "<<b<<"i\n";
		}
};

complex sumComplex(complex o1,complex o2){
	complex o3;
	o3.setnum(o1.a+o2.a,o1.b+o2.b);
	return o3;
}


int main(){
	complex c1,c2,sum;
	c1.setnum(1,4);
	c2.setnum(5,8);
	c1.print();
	c2.print();
	
	sum = sumComplex(c1,c2);	
	sum.print();
	sum.setnum(5,6);
	sum.print();
	
	return 0;
}






















































































































