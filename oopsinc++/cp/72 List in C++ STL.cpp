#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
	list<int>::iterator it;
	it = l.begin();
	for(it=l.begin();it!=l.end();it++){ // begin means start and end means the end pointer
		cout<<*it<<" ";
	}cout<<"\n";
}

int main(){
	list<int> list1; // list of 0 length
	list<int> list2(3); // Emplty list of size 7 it has element but the elemnt does not contain values
	list1.push_back(45);
	list1.push_back(44);
	list1.push_back(43);
	list1.push_back(42);
	list1.push_back(14);
	list1.push_back(42);
	list1.push_back(42);
	list1.push_back(42);	
//	list1.pop_back(); // Delete the last element
//	list1.pop_front(); // deletes the first element
	list1.remove(42); // removes all the  number 42	
			
	display(list1);
	/*Sorting a list*/
//	list1.sort();
//	display(list1);

	//reversing 
//	list1.reverse();
	

	int i,a;
	i=3;
//	cout<<"Enter the size\n";
//	cin>>i;
	while(i--){
		cout<<"Enter the element\n";
		cin>>a;
		list2.push_back(a);
	}
	
	display(list2);
	
	/*Merging two lists*/
	list1.merge(list2); // adding list1 after list2
	cout<<"Merging \n";
	display(list1);
	
	
	return 0;
}

































































