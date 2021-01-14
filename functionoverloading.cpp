#include<iostream>
using namespace std;

int sum(int a,int b){
	cout<<endl<<"using function 1"<<endl;
	return a+b;
	
}

int sum(int a,int b,int c){
	cout<<endl<<"using function 2"<<endl;
	return a+b+c;
	
}
int main(){
	
	
	cout<<"The sum of 1 and 3 is  "<<sum(1,3)<<endl;
	cout<<"The sum of 4 ,5 and 9is "<<sum(4,5,9)<<endl;	
	
	
	return 0;
}






























