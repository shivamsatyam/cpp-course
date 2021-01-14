#include <iostream>
using namespace std;
/*
			Student
			____|_____
			|		  |
			Sports	  Test
			|___________|
				  |
				  Result
*/				  	
class Student{
	protected:
		int roll;
	public:
		void set_number(int a){
			roll = a;
		}
		void print(){
			cout<<"Your roll no is "<<roll<<endl;
		}	
};
//apni kasha
//we can write public virtual also
class Test:virtual public Student{
	protected:
		float maths,physics;
	public:
		void set_marks(float a,float b){
			maths = a;
			physics = b;
		}	
		void print_marks(void){
			cout<<"Your result is here\n"<<"Maths: "<<maths<<endl<<"Physics: "<<physics<<"\n";
		}	
};

class Sports:public virtual Student{
	protected:
		float score;
	public:
		void set_score(float a){
			score = a;
			
		}	
		void print_score(void){
			cout<<"Your PT score is "<<score<<endl;
		}	
};

class Result:public Test,public Sports{
	private:
		float total;
	public:
		
		void display(){
		total = maths+physics+score;
			print();
			print_marks();
			print_score();
			cout<<"Total marks gained by roll no "<<roll<<" is "<<total<<endl;
		}	
};

int main()
{
	Result name;
	name.set_number(2);
	name.set_marks(80,80);
	name.set_score(12);
	name.display();

	return 0;
}




























