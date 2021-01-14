#include<iostream>
using namespace std;

int fib(int n){
	if(n<2){
		return 1;
	}	
	cout<<"runs"<<endl;	
	return fib(n-1)+fib(n-2);

}
 
int main(){
	
	int a;
	cin>>a;
	cout<<"the fibnachhio series is "<<fib(a);
	
	
	
	return 0;
}























