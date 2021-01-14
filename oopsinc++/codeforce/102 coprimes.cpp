#include<iostream>
#include<cmath>
using namespace std;

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	if(b==0){
		return a;
	}
	if(a==b){
		return a;
	}
	return gcd(b,a%b);

}
 
int main(){
	int a,g;
	cin>>a;
	long long int ans=0;
	for(int i=0;i<a;i++){
		g = gcd(i,a);
		if(g==1){
			ans+=1;
		}
	}
	cout<<ans;
	return 0;
}



















