#include<iostream>
#include<vector>

using namespace std;
template<class T>
void display(vector<T> &v){ //vector<int> is a datatype like int or float
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		
	}
	cout<"\n";
}

int main(){
	
	
	//vector resies the array automatically by copying the array into another
	
	vector<int> vec1; //zero length vector
	int element,size;
	cout<<"Enter the size of vector\n";
	cin>>size;
	
	for(int i=0;i<size;i++){
		cout<<"Enter the element of the vector\n";
		cin>>element;
		vec1.push_back(element); // adding element to the vector array
	}
//	vec1.pop_back(); // pop an element from the end
	vector<int>::iterator iter = vec1.begin(); // this means we point the iter at the beginning of the vector
//	vec1.insert(iter+1,566); // Inserting the element
	vec1.insert(iter+1,50,566); // Inserting 50 copies
	display(vec1);
	
	vec1.at(1);
	
	
	
	
	// making vector of some size
	vector<int> vec2(4); // 4 element int vector
	vector<char> vec3(4);
	vector<char> vec4(vec3); // 4 element chracter vector using vec2 shivam ye yek tarika hai
	vector<int> vec5(7,4); // 7 element vector of number 4
	display(vec5);
	
	
	return 0;
}

































































