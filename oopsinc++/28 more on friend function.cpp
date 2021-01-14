#include<iostream>
#include<string>

using namespace std;

class Y;

class X{
	int data;
	friend void add(X,Y);
	public:
		void setvalue(int value){
			data = value;
		}
};

class Y{
	int num;
	friend void add(X,Y);
	public:
		void setvalue(int value){
			num  = value;
		}
};

void add(X o1,Y o2){
	cout<<"Summing data of X and Y is "<<o1.data+o2.num;
}

int main(){
	X a;
	a.setvalue(2);
	Y b;
	b.setvalue(6);
	add(a,b);
	
return 0;

}
 


























































































































































































