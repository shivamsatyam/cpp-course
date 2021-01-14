#include<iostream>
#include<cstring>
using namespace std;


class Cwh{
	protected:
		string title;
		float rate;
	public:
		Cwh(string s,float r){
			title=s;
			rate = r; 
		}
		virtual void display(){cout<<"I am a base class dispay function \n\n";}	
};

class Cwhvideo:public Cwh{
	float videolen;
	public:
		Cwhvideo(string s,float r,float vl):Cwh(s,r){
			videolen = vl;
		}
		void display(){
			cout<<"2 This is an amazing video with title "<<title<<endl;
			cout<<"2 This is an amazing rate "<<rate<<endl;
			cout<<"2 The video length is "<<videolen<<endl;	
		}
};

class Cwhtext:public Cwh{
	int words;
	public:
		Cwhtext(string s,float r,int wo):Cwh(s,r){
			words = wo;
		}
		void display(){
			cout<<"3 This is an amazing video with title "<<title<<endl;
			cout<<"3 This is an amazing rate "<<rate<<endl;
//			cout<<"3 The video length is "<<videolen<<endl;
			cout<<"3 Nof of words in the text is "<<words<<endl;		
		}
};

int main(){
//	char *title = new char[30];
	string title;
	float rating,vlen;
	int words;
	title = "Django tutorial";
	vlen = 4.56;
	rating = 5;
	
	Cwhvideo djvideo(title,rating,vlen);
	djvideo.display(); 
	
	title = "words classes";
	rating = 4.9;
	words = 500;
	
	Cwhtext djtext(title,rating,words);
	djtext.display();
	
	Cwh *tuts[2];
	tuts[0] = &djvideo;
	tuts[1] = &djtext;
	
	cout<<"\n\n";
	tuts[0]->display();
	cout<<"\n\n";
	tuts[1]->display();
	
	return 0;

}



/*
Rules for defining virtual function
1. They cannot be static
2. They are accessd by object pointers
3. Virtual function can be a friend of another class
4. A virtual functon in base class might not be used
5. if a virtual function defined in the base class there is no necessity of redifing it in the derived class

*/




























































































































































































