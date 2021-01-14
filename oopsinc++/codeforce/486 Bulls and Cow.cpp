#include<iostream>
#include<string>
#include<cstring>

using namespace std;

void answer(string a,string b){
	long long int cow=0,bull=0;
	for(int i=0;i<a.size();i++){
		if(a.at(i)==b.at(i)){
			bull+=1;
		}
	}
	
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			if(a[i]==b[j] && i!=j){
				cow+=1;
			}
		}
	}
	cout<<bull<<" "<<cow;
}

int main(){
	string a,b;
	cin>>a>>b;

	answer(a,b);
	
	return 0;
}



















