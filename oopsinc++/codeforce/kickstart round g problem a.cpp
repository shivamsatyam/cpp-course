#include<iostream>
#include<string>
using namespace std;

const int a = 1e6+5;


void test_case(){
	string s;
	cin>>s;
	int n = strlen(s);	
	for(int i=0;i<n;++i){
		if(string(s+i,s+i+4)=="KICK"){
			
		}
	}	
}
 
int main(){
	int T;
	cin>>T;
	for(int i=0;i<=T;i++){
		printf("Case #%d",i);
		test_case();
	}

	return 0;
}



















