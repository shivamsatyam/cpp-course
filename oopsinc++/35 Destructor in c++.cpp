#include<iostream>
#include<string>
using namespace std;
//Destructor never takes an argument nor return any value

int count = 0;

class Num{
	public:
		Num(){		count++;
		cout<<"This is a time when constructor called for object number"<<count<<endl;
		}
		//tilt
		~Num(){
			cout<<"This is the time when my distructor is called for object number"<<count<<endl;
			count--;	
		}
};


using namespace std;
int main(){
	
	cout<<"We are encide our main function\n";
	cout<<"Creating first objects n1\n";
	Num n1;
	{
		cout<<"Creating two more objects\n";
		Num n2,n3;
		cout<<"Exiting the block\n";
		
	}
	cout<<"Back to main\n";
	
	return 0;

}



























































































































































































