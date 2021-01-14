#include<iostream>
#include<string>
using namespace std;

void answer(string s){
	string::iterator it = s.end()-1;
	
	if((*it)=='x' || (*it)=='s' || (*it)=='o'||( (*it)=='h' && (*(it-1))=='c')){
		string::iterator i;
		for(i=s.begin();i!=s.end();i++){
			cout<<*i;
		}
		cout<<"es";	
	}
	else if((*it)=='f'){
		string::iterator c;
		for(c=s.begin();c!=s.end()-1;c++){
			cout<<*c;
		}
		cout<<"ves";
	}
	else if((*it)=='e' && (*(it-1))=='f'){
		string::iterator i;
		for(i=s.begin();i!=s.end()-2;i++){
			cout<<*i;
		}cout<<"ves";
	}
	else if((*it)=='y'){
		string::iterator i;
		for(i=s.begin();i!=s.end()-1;i++){
			cout<<*i;
		}cout<<"ies";
	
	}
	else{
		string::iterator i;
		for(i=s.begin();i!=s.end();i++){
			cout<<*i;
		}cout<<"s";
		
	}
	
	
}

int main(){
//	string s;
//	cin>>s;
//	string::iterator it;
//	for(it=s.begin();it!=s.end();it++){
//		cout<<*it<<"\n";
//	}
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		answer(s);
		cout<<"\n";
	}
	
	return 0;
}



















