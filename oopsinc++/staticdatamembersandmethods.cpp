#include<iostream>
using namespace std;

class Employee{
	static int count; //default value is zero
	int id;
	public:
		void setData(void){
			cout<<"\nEnter the id\n";
			cin>>id;	
			count++;
		}
		void getData(void){
			cout<<"The id of the employee is \n";
			cout<<id;
			cout<<" The number is "<<count;
		}
		
	static void getCount(void){
		cout<<"\n\nThe value of count is"<<count<<endl;
//		cout<<id;   this provide an error because static function can only access static variables
	}	
};

int Employee::count;
// we can chage the static variable by int Employee::count=1000;
int main(){

Employee shivam,satyam,ajs;
shivam.setData();
//shivam.getData();
Employee::getCount();  //this is a static member function you can access only rhe static function

satyam.setData();
//satyam.getData();
Employee::getCount();

ajs.setData();
//ajs.getData();
Employee::getCount();

return 0;
}
















