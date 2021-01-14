#include<iostream>
//#include<graphics.h>
using namespace std;

//Forward decelartion
class Complex;

class Calculator{
	public:
		int add(int a,int b){
			return (a+b);
		}
		int sumRealComplex(Complex ,Complex );	
		int sumSecondComplex(Complex ,Complex );			   
		

};


class Complex{
	int a,b;
	//indivisualy decelaring functions as friends 
	friend int Calculator::sumRealComplex(Complex o1,Complex o2);
	friend int Calculator::sumSecondComplex(Complex o1,Complex o2);
	//aliter: Decelering the entire calculator class as a friend;
	friend class Calculator;
	//making class calculator as a friend
	public:
		void setNumber(int n1,int n2){
			a = n1;
			b = n2;
		}


		void PrintNumber(){
			 cout<<"your number is"<<a<<" + "<<b<<"i"<<endl<<endl;
		}
};

int Calculator::sumRealComplex(Complex o1,Complex o2){
			return(o1.a+o2.a);				   
		}

int Calculator::sumSecondComplex(Complex o1,Complex o2){
			return(o1.b+o2.b);				   
		}


int main(){
	Complex o1,o2;
	o1.setNumber(1,4);
	o2.setNumber(5,7);
	
	Calculator calc;
	int res = calc.sumRealComplex(o1,o2);
	int resc = calc.sumSecondComplex(o1,o2);
	cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
	cout<<"The sum of complex part of o1 and o2 is "<<resc<<endl;
return 0;
}


