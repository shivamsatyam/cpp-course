#include<iostream>
using namespace std;

//Employee is the base class
class Employee{
	public:
		int id;
		float salary;

		Employee(int i){
			id = i;
			salary = 34;
		}
		Employee(){}
			
	
		
};
//Programmer is a derived class
// Derived class syntax
//class derived-class-name: {(visibility-mode)} {(base-class-name)}
//default visibility-mode is private
/*
visibility-mode
1.default visibility-mode is private
2.Public visibility-mode=> Public member of the base class become public member of the derived class
2.Private visibility-mode=> Public member of the base class become private member of the derived class
 
*/
//private members of base class are never inherit in the derived class

class Programmer :public Employee{
	public:
		int lang = 9; 
		Programmer(int ids){
			id = ids;		
		}
		void getdata(){
			cout<<id<<endl;
		}
	
};



int main(){
	Employee c(1),java(2);
	cout<<c.salary<<endl;
	cout<<java.salary<<endl;
	Programmer py(4);
	cout<<py.lang;
	py.getdata();
	cout<<py.id;
	
	return 0;	
}



















