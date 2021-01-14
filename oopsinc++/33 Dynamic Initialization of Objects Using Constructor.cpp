#include<iostream>
#include<string>

using namespace std;

class Bank{
	int pr;
	int rate;
	int time;
	int value;
	public:
		Bank(){};
		Bank(int prs,int t,float r); // r can be like 0.04
		Bank(int prs,int t,int r);	// r can be a value like 14	percent
		void show();
		
};

Bank::Bank(int prs,int t,float r){
	pr = prs;
	rate = r;
	time = t;
	value = prs;
	for(int i=0;i<time;i++){
		value = value*(1+r);
	}
}

Bank::Bank(int prs,int t,int r){
	pr = prs;
	rate = float(r)/100;
	time = t;
	value = prs;
	for(int i=0;i<time;i++){
		value = value*(1+rate);
	}
}

void Bank::show(){
	cout<<endl<<"Principal: "<<pr<<endl
	<<"Return value is"<<value<<endl;
}

int main(){
//	Bank b1, b2, b3;

	int p,y,R;
	float r;
	

	cout<<"Enter the value of p y and r"<<endl;
	cin>>p>>y>>r;
	Bank b1 = Bank(p,y,r);
	b1.show();
	
	cout<<"Enter the value of p y and R"<<endl;
	cin>>p>>y>>R;
	Bank b2 = Bank(p,y,R);
	b2.show();
	
	return 0;

}



























































































































































































