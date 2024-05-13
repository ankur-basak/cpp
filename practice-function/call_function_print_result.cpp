/*Write a function sum that takes two integer arguments a and b and returns their sum. In
your main function, prompt the user to enter two numbers, call the sum function with those
values, and print the result*/

#include<iostream>
#include<conio.h>
using namespace std;

int sum(int a,int b)
{
    int sum = a+b;
    return sum;
}
int main()
{
    int x,y;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter Second number : ";
    cin>>y;
    cout<<x<<" + "<<y<<" = "<<sum(x,y);

    getch();
}
