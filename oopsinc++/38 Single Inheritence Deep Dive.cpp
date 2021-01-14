#include<iostream>
using namespace std;

class Base{
	int data1; // private by default cannot inherited
	public:
		int data2;
		void setdata();
		int getdata1();
		int getdata2();
};

void Base::setdata(void){
	data1 = 10;
	data2 = 20;
}

int Base::getdata1(){
	return data1;
}

int Base::getdata2(){
	return data2;
}

class Derived:public Base{ // class is being derived publically
	int data3;
	public:
		void process();
		void display();
};

void Derived::process(void){
	data3 = data2*getdata1();
}

void Derived::display(void){
	cout<<"Vaue of data 1 is "<<getdata1()<<endl;
	cout<<"Vaue of data 2 is "<<data2<<endl;
	cout<<"Vaue of data 3 is "<<data3<<endl;

}

int main()
{
	Derived der;
	der.setdata();
	der.process();
	der.display(); 
	return 0;
}