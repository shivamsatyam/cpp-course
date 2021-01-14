#include<iostream>
using namespace std;


int product(int a,int b){
	static int c = 0;//this excute only once a time
	c = c+1;//next time this function is run, the value of c will be retained
	return a*b+c;
}

float moneyReceived(int current,float factor = 1.04){
	
	return current*factor;
}
                                             
//int strlen(const char *p)

int main(){
	int a,b;
//	cout<<"Enter the value of numbers"<<endl;
//	cin>>a>>b;
//	cout<<"The product of two number is "<<product(a,b)<<endl;
//	cout<<"The product of two number is "<<product(a,b)<<endl;
//	cout<<"The product of two number is "<<product(a,b)<<endl;
//	cout<<"The product of two number is "<<product(a,b)<<endl;
//	cout<<"The product of two number is "<<product(a,b)<<endl;
//	cout<<"The product of two number is "<<product(a,b)<<endl;
	int money = 100;
	cout<<"Money received bythe normal people"<<moneyReceived(money)<<endl;
	cout<<"Money received by the vip people is"<<moneyReceived(money,1.1)<<endl;
	
	return 0;
}








































































































