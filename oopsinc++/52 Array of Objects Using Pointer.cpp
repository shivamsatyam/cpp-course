#include<iostream>
using namespace std;

class Shop{
	int id;
	float price;
	public:
		void set(int a,float b){
			id = a;
			price = b;		
		}
		void print(){
		cout<<"The id of the item is "<<id<<endl;
		cout<<"The price of the item is "<<price<<endl;
		}
};


int main(){
	int size = 3;
	int p;
	float q;
	Shop *ptr = new Shop[size]; // Making 2 objects of Shop class
	Shop *pnew = ptr;
	int i;
	for(i=0;i<size;i++){
		cout<<"Enter Id and Price of item "<<i+1<<endl;
		cin>>p>>q;
		ptr->set(p,q);
		ptr++;
	}
	
	for(i=0;i<size;i++){
		(*pnew).print();
		pnew++;
	} 
	
	return 0;
}
























































