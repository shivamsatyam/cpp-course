//#include<iostream>
//#include <iomanip>
//using namespace std;
//
//
//typedef struct employee
//{
//    int eId;
//    char favChar;
//    float salary;
//} syntax;
//
//// union
//// we use only one type at a time
//union moneys
//{
//    int rice;  //exchange system money to rice
//    char car;
//    float pounds;
//};
//
//
//int main(){
//
//    //Structure --- it is  a user define datatypes it merges float int char and double
//    syntax shivam;
//    struct employee satyam;
//    struct employee bhudu;
//    //we make many struct 
//    
//    {
//        shivam.eId=1;
//        shivam.favChar ='c';
//        shivam.salary = 78000000;
//    };
//
//    cout<<"the value is"<<shivam.eId<<endl;
//    cout<<"the value is"<<shivam.favChar<<endl;
//    cout<<"the value is"<<shivam.salary<<endl;
//    
//    //union
//    union moneys m1;
//    m1.rice=44;
//    m1.car=44;
//    cout<<"the value of m1 rices is "<<m1.rice<<endl;
//    cout<<"the value of m1 rices is "<<m1.rice<<endl;
//
//    //making enum
//    //we can give a number to the character value
//    enum Meal{Breakfast,Lunch,Dinner};
//    Meal me=Breakfast;
//    cout<<Breakfast<<endl;
//    cout<<Lunch<<endl;
//    cout<<Dinner<<endl;
//
//    char str[100] = "65675";
//    // cin>>str;
//    cout<<endl<<str;
//    return 0;
//}
//
//
//





#include<iostream>
using namespace std;
//Araays are only used for storing only on type of value Ex int array[4] =[4,5,7,6] but we can used struct for storing different variables
//as in python programming we use 'as' function for make a variable name smaller in c++ we use type def 

/*
struct employee{
	
	int Id;
	char favChar;
	float salary;	
};
*/

typedef struct employee{
	/*data*/
	int Id;
	char favChar;
	float salary;	
} ep;

//union is only used to use only one data type at a time
union money{
	int rice;
	char car;
	float pound;
};
int main(){
	//calling struct see lime no 73 struct employee
//	union money m1;
//	m1.rice = 45;
//	m1.car = 's';
//	
//	cout<<"The value of union is "<<m1.car;
//	
//	
	
	/*making enum*/
	enum Meal{breakfast,lunch,dinner};
	Meal m1 = breakfast;
	cout<<m1;
	cout<<breakfast;
	cout<<lunch;
	cout<<dinner;
	
	
//	struct employee shivam;
//	shivam.Id = 1;
//	shivam.favChar = 's';
//	shivam.salary = 123;
//	
//	ep great;
//	great.Id = 1;
//	great.favChar = 's';
//	great.salary = 123;
//	
//	cout<<"The char of shivam is "<<shivam.favChar;
	return 0;
}































