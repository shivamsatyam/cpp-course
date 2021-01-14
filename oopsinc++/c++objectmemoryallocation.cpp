#include<iostream>
using namespace std;

class Shop{
	int itemId[10];
	int itemPrice[10];
	int counter;
	public:
		
		void initialize(void){
			counter = 0;
		}
		void setPrice(void);
		void displayPrice(void);
		
};
	
void Shop::setPrice(void){
	cout<<"Enter the id of your item "<<endl;
	cin>>itemId[counter];
	cout<<"Enter the Price of your item "<<endl;
	cin>>itemPrice[counter];
	counter++;
	
}
void Shop::displayPrice(void){
	for(int i=0; i<counter;i++){
		cout<<"The item id is "<<itemId[i]<<"and the item price is "<<itemPrice[i];
		
	}	
}

int main(){
Shop prob;
prob.initialize();
prob.setPrice();
prob.setPrice();
prob.setPrice();
prob.displayPrice();


return 0;
}

































































