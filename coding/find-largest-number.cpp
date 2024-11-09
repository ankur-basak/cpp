#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter an another number: ";
    cin>>num2;

     cout<<"Number 01: "<<num1<<endl;
     cout<<"Number 02: "<<num2<<endl;

    if (num1>num2)
    {
        cout<<"Number 01 is larger. "<<endl;
    }
    else if (num2>num1)
    {
      cout<<"Number 02 is larger. "<<endl;
    }
     else
     {
         cout<<"Both number are same.";
     }
     return 0;


}
