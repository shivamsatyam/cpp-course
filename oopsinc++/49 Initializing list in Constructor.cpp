#include <iostream>
using namespace std;

class List{
	int a; // a will be initialized first then b
	int b;
	public:
//		List(int x,int y):a(x),b(y)
//		List(int x,int y):a(x),b(x+y)
//		List(int x,int y):a(x),b(a+y)
//		List(int x,int y):b(y),a(x+b) // This will create problem because a is initialised first
		
	
		{
			cout<<"Constructor called\n";
			cout<<"The value of a is "<<a<<endl;
			cout<<"The value of b is "<<b<<endl;
			
		}
};


int main(){
	List a(3,4);
	
		
	return 0;
}




























