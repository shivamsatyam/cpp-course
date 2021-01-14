#include<iostream>
#include<string>

using namespace std;
class c2;

class c1{
	int data;
	friend int exchange(c1 &,c2 &);
	public:
		void intdata(int a){
			data  = a;
		}
		void display(){
			cout<<"The value of c1 is "<<data<<endl;
		}
}; 


class c2{
	int value;
	friend int exchange(c1 &,c2 &);
	public:
		void intdata(int a){
			value  = a;
		}
		void display(){
			cout<<"The value of c2 is "<<value<<endl;
		}
}; 

int exchange(c1 & a,c2 & b){
	int temp  = a.data;
	a.data = b.value;
	b.value = temp;
}

int main(){
	c1 a;
	c2 b;
	a.intdata(3);
	b.intdata(4);
	exchange(a,b);
	a.display();
	b.display();
return 0;

}
 


























































































































































































