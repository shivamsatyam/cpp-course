#include<iostream>
#include<string>

using namespace std;

//class Employee{
	//class definition
//} shivam.bhudu,bhufuno2;
/*we can make the object of the class variable after the last bracket of the class*/
      
//nesting of member function	     


class Binary{
	string s;
	public:
		void read(void);
		void chik_bin(void);
		void ones(void);	
		void display(void);	
};	

void Binary::read(void){
	cout<<"Enter the binary number\n";
	cin>>s;
}

void Binary::chik_bin(){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0' && s.at(i)!=1){
			cout<<"the number is binary"<<endl;
			
		}else{
			cout<<"Incorrect binary format"<<endl;
			exit(0);
		}
	}
}

void Binary::ones(){
	for(int i=0;i<s.length();i++){
		if(s.at(i) == '0'){
			s.at(i) = '1';	
		}
		else{
			s.at(i) = '0';	
		}
				
	}
}
void Binary::display(void){
	cout<<endl;
	for(int i=0;i<s.length();i++){
	cout<<"cout printing"<<s.at(i);
	}
}

int main(){
Binary b;
b.read();
b.chik_bin();
b.display();
b.ones();
b.display();

return 0;

}




























































































































































































