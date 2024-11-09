/*Write a function is Positive (int num) that takes an integer num and returns true if it's
positive, false otherwise. Use this function in main to check if a user-entered number is
positive, negative, or zero*/


#include<iostream>
#include<conio.h>
using namespace std;

int Positive(int num)
{
    if(num>0)
    {
        cout<<num<<" is a positive number";
    }
    else if(num<0)
    {
        cout<<num<<" is a negative number";
    }
    else
    {
        cout<<num;
    }
}
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    Positive(x);

    getch();
}
