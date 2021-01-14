#include<iostream>
using namespace std;

class Complex{
	int real,imaginary;
	public:
		void getdata(){
			cout<<"The real part is "<<real<<endl;
			cout<<"The imaginary part is "<<imaginary<<endl;
			
		}
		void set(int a,int b){
			real = a;
			imaginary = b;
		}
};


int main(){
	Complex c;
//	Complex *ptr = &c;
	/*Firstly derefering and assing value and run the function*/
	Complex *ptr = new Complex; 
//	(*ptr).set(4,5);
//	(*ptr).getdata();
		
		/*OR*/
	
	ptr->set(5,6);
	ptr->getdata();

	/*Making an array of Objects of a class*/
	Complex *p = new Complex[2]; // Making 2 object of class Complex
	p->set(1,1);
	p->getdata();

	(p+1)->set(2,2);
	(p+1)->getdata();

	return 0;
}
























































