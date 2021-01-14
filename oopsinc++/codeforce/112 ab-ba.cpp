#include<iostream>
#include<cmath>
using namespace std;


//1 1 2 3 5 
int main(){
	int a,b;
	cin>>a>>b;
	int e=1,r=1;
	for(int i=0;i<b;i++){
		e=e*a;
	}	

	for(int i=0;i<a;i++){
		r=r*b;
	}	

	cout<<e-r;
	
	return 0;
}



















