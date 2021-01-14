#include <iostream>
using namespace std;

class Base{
	protected: // this means a become private but it can be inherited
		int a = 56;
	private:
		int b;

};

//For a proteced member
/*
			public Derivation   private Derivation   protected derivation
 1. Private 	=> Not inherited   Not inherited       Not inherited
 2. Protected 	=>protected        private             Protected
 3. Public		=>public           private             protected

*/
class Derived:Base{


};




int main()
{
	Base b;
	Derived d;
	//cout<<d.a; // a is now protected that means a is inherited but it 
	// does not use directly		
	return 0;
}