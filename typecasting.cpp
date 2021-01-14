#include<iostream>
using namespace std;


int main()
{
    // int a,b,c;
    // cout<<"Enter the value is a\n";
    // cin>>a;
    
    // cout<<"Enter the value is b\n";
    // cin>>b;

    // c = a+b;
    // cout<<"the sum is "<<c;

    float fl = 4.6756f;
    /*  c++ used the floating point number as a double to convert it in float number we have to type write "f" after the number is executed we an also used "F"
    */
   /*
   and "l" is prefered as long double we can also use "L"
   */
   long double d =45.5l;
    
    cout<<"the double convered into floating point number is \n"<<fl<<endl<<"and the double is \n"<<d<<endl;

    
    // cout<<"the size of 67.78 is "<<sizeof(67.78)<<endl;
    // cout<<"the size of 67.78f is "<<sizeof(67.78f)<<endl;
    // cout<<"the size of 67.78F is "<<sizeof(67.78F)<<endl;
    // cout<<"the size of 67.78l is "<<sizeof(67.78l)<<endl;
    // cout<<"the size of 67.78L is "<<sizeof(67.78L)<<endl;
    
    /*-----------References variables------------------*/
    
    //rohan ---->Monty ---->coder

    float x=455;
    float & y=x; // it means that we make two variable but the value is same which means that we use the value of x as y not the value of y as x
    // cout<<x;
    //-------------------TYPECASTING----------------------

    int cast=45;
    cout<<cast<<endl;
    // converting the int into flaot
    cout<<"int to float "<<(float)cast; // or we can use it as float(cast)
    cout<<"\n";

    float news=67.78;
    cout<<"the first value is "<< cast+news<<endl;
    cout<<"the second value is "<< cast+int(news)<<endl;
    cout<<"the third value is "<< cast+(float)news<<endl;
    return 0;    


}














