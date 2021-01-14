#include<iostream>
#include<algorithm>
using namespace std;

//Function object => function wrapped in a class so that it available like an object it is a object which runs as function
//Function objects are called functors

int main(){
	
	int arr[] = {1,3,5,534321,5,424,213,21,3,4,2};
	//sorting  algorithm in ascending order
	sort(arr,arr+11); // 11 means we sort the first 11 element of the arr[] array 
	for(int i=0;i<11;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	//int descinding
	sort(arr,arr+11,greater<int>());
	for(int i=0;i<11;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}

































































