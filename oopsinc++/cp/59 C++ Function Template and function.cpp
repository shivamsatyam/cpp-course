#include<iostream>
using namespace std;

template<class T1,class T2>
float average(T1 a,T2 b){
	T2 c = (a+b)/2.0;
	return c;
}




int main(){
	float fsum = average<int,float>(6,5);
	cout<<fsum;
	return 0;
}

































































