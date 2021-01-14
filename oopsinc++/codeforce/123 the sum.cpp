#include<iostream>
using namespace std;

int func(int n){
	if(n==0||n==0){
		return 0;
	}
	int a=1,b=1,c;
	for(int i=1;i<=n;i++){
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}

//1 1 2 3 5 
int main(){
	int n;
	cin>>n;
	int a = func(n);
	cout<<a-1;	
	return 0;	
}



















