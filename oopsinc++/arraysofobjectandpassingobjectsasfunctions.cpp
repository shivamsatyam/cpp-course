//#include<iostream>
//using namespace std;
//
//class Employee{
//	int id;
//	int salary;
//	public:
//		void setId(void){
//			salary = 123;
//			cout<<"Enter the id of employee\n";
//			cin>>id;
//		}
//		void GetId(void){
//			cout<<"The id of the employee is"<<id<<endl;
//		}
//};
//
//int main(){
////Employee shivam,rohan;
////shivam.setId();
////shivam.GetId();
///*storing employee using array*/
//
//Employee fb[4];
//for(int i=0; i<4;i++){
//	fb[i].setId();
//	fb[i].GetId();
//	cout<<"The employee id is "<<fb;
//}
//
//
//return 0;
//}



#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
		void setData(int r1,int r2){
			a = r1;
			b = r2;
		}
		void SetDataBySum(complex o1,complex o2){
			a = o1.a + o2.a;
			b = o1.b + o2.b;
		}
		void Printnumber(){
			 cout<<"the complex number is "<<a<<"+i"<<b<<"\n";
		}
		
};
int main(){
complex num1,num2,num3;
num1.setData(1,2);
num1.Printnumber();

num2.setData(3,4);
num2.Printnumber();

num3.SetDataBySum(num1,num2);
num3.Printnumber();
return 0;
}




























