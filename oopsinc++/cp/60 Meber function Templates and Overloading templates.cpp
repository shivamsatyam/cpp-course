#include<iostream>
using namespace std;

template<class T>
class Sh{
	public:
		T data;
		Sh(T a){
			data = a;
		}
		void display();
};

template <class e>
void Sh<e>::display(){
	cout<<data<<endl;
}

void func(int a){
	cout<<"I am first function "<<a<<endl;
}
template<class D>
void func(D a){
	cout<<"I am second templatised function "<<a<<endl;
}
int main(){
	Sh <float>s(45.545);
	cout<<s.data<<endl;
	s.display();
	
	func(6);// func with template takes the highest priority
	return 0;
}

































































