#include<iostream>

using namespace std;

int main(){
	int a=4;
	int *ptr = &a;
	cout<<ptr<<" "<<*ptr<<endl;
	
	//new keyword
	// This means we dynimically allcate memory to a new interger whose value is 5 and in is a pointer which the the value of the interger 
	int *in = new int(5);
	//delete in; // for deleting number
	cout<<"The value of in is "<<*in<<endl;
	
	float *fl = new float(45.54);
	cout<<"The value of fl is "<<*fl<<endl;
	
	// Alocating an array
	//square brakets are use of allocatign arrays
	int *arr = new int[3];
	arr[0] = 12;
	*(arr+1) = 22; // adding value using pointers
	arr[2] = 32;
//	delete[] arr; // delete for deleting array or block of memory
	cout<<"The value of array  is "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
	
	//delete operator/keyword
	
	
	
	return 0;
}
























































