#include<iostream>
#include<string>

using namespace std;

class Complex{
	int a,b;
	public:
		Complex(int x,int y);
		void print(){
			cout<<"The number is "<<a<<" + "<<b<<"i\n";
		}
		Complex(int x);
};

Complex::Complex(int x,int y){ // This is a Parameterized constrcutor
	a = x;
	b = y;
}

Complex::Complex(int x){
	a = x;
	b = 0;
}
int main(){
	
	// This is a Inplicit call
	Complex c(10,2);
	c.print();
	// This is a Explicit call
	Complex b = Complex(5,6);
	b.print();
	
	Complex d = Complex(2);
	d.print();

return 0;

}



























































































































































































