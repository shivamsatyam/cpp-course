#include<iostream>
#include<string>
#include<cstring>

using namespace std;


int main(){
	int p,m,c,k,r,v;
	cin>>p>>m>>c;
	cin>>k>>r>>v;
	long long int count = 0;
	while(p>=k && m>=r && c>=v){
		p = p-k;
		m = m-r;
		c = c-v;
		count++;
	}
	
	cout<<count;
	return 0;
}



















