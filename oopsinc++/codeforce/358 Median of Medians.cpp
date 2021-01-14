#include<iostream>
#include<algorithm>
using namespace std;

void answer(int arr[],int n){
	sort(arr,arr+n);
	cout<<arr[1];
}

int main(){
	int a,b,c,n;
	int arr[3];
	int qw[3];
	for(int i=0;i<3;i++){
		cin>>a>>b>>c;
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		sort(arr,arr+3);
		n = arr[1];
		qw[i] = n;
				
	}
	answer(qw,3);
	cout<<"\n";
	return 0;
}



















