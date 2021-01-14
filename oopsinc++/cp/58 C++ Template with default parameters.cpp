#include<iostream>
using namespace std;

template<class T1=int,class T2=float,class T3=char>
class Shivam{
	public:
		T1 a;
		T2 b;
		T3 c;
		Shivam(T1 x,T2 y,T3 z):a(x),b(y),c(z){}
		
		void display(){
			cout<<"The value of a and b is "<<a<<"  "<<b<<" "<<c<<endl;
		}
};

int main(){
//	Shivam<>s(3,4,'5') //we can use default template datatypes
	Shivam<float,char,int>s(3.5,'A',16);
	s.display();
	return 0;
}

































































