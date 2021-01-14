#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //there are mainly three basic type of control structure
    // 1.sequence structure=> without if else and loop
    // 2.selection structure => if else condition and switch
    // 3.loop structure=> while loops and for loop condition
    float age;
    cout<<"write your age"<<endl;
    cin>>age;

    if ((age<18) & (age<17))
    {
        /* code */cout<<"you not able to give vote"<<endl;
    }
    
    

    int age;
    cout<<"Enter your age\n";
    cin>>age;

    // if ((age>18) && (age>17))
    // {   
    //    cout<<"you are elegible for doing vote";     
    // }
    // else if(age==18){
    //     cout<<"you are in between better luck next time";
    // }
    // else{
    //     cout<<"you are not eligible of doing vote";
    // }
    //
    switch (age)
    {
    case 54;/* constant-expression */:
        /* code */
        cout<<"you are able"<<endl;
        break;
    case 76;:
    cout<<"yoy"<<endl;
    break;
    default:
    cout<<"ff"<<endl;
        break;
    }
  /* switch (age)
   {
   case 18:
       cout<<"your are 18";
      break;
   
   case 22:
       cout<<"your are 22";
       break;
   
   default:
       cout<<"no special cases";
       break;
   }
*/

    return 0;
}
