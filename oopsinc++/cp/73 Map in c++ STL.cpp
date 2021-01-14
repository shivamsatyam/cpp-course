#include<iostream>
#include<map>
using namespace std;




int main(){


	map<string,int> marks;
	marks["shivam"] = 496;
	marks["sh"] = 963;
	marks["shi"] = 926;
	marks["shiv"] = 196;
	
	//inserting in map
	marks.insert({{"py",4},{"java",7}});
	
	map<string,int>::iterator iter;
	for(iter=marks.begin();iter!=marks.end();iter++){
		cout<<(*iter).first<<" "<<(*iter).second<<"\n";
		// first is the key and second is the value
	}
	
	cout<<"The size is"<<marks.size()<<endl;
	cout<<"The max size is"<<marks.max_size()<<endl;
	cout<<"The empty return value"<<marks.empty()<<endl;
	
	return 0;
}

































































