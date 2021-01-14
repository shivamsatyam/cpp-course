#include<iostream>
#include<string>
#include<cstring>

using namespace std;
//1 2 3 4 5 6  9 10 11 12
void answer(int n,int m){
	if(n>31 || m>12){
		cout<<"Impossible";
	}else if(m==2 && n>28){
		cout<<"Impossible";
	}else{
		int a = n%7;
		if(a==0){
			cout<<7;
		}else{
			cout<<a;
		}
		
	}
}


int main(){
	int n,m;
	cin>>n>>m;
	answer(n,m);	
	cout<<"\n";
	return 0;
}



















