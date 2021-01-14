#include<iostream>
using namespace std;

template<class T1,class T2>
class Myclass{
	public:
		T1 data1;
		T2 data2;
		Myclass(int a,char b){
			data1 = a;
			data2 = b;
		}
		void display(){
			cout<<this->data1<<" "<<this->data2<<endl;
		}
};


int main(){
	Myclass <int,char>obj(4,'A');
	obj.display();
	return 0;
}

































































