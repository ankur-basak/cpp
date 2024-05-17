#include<iostream>
#include<conio.h>
using namespace std;

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main()
{
    addition(20,45);

    subtraction(22,2);

    multiplication(10,8);

    division(10,4);

    cout<<"\nAll function have called";

    getch();
}

void addition (int a, int b)
{
    int sum = a+b;
    cout<<"Sum = "<<sum<<endl;
}

void subtraction (int a, int b)
{
    int result = a-b;
    cout<<"Subtraction = "<<result<<endl;
}

void multiplication (int a, int b)
{
    int result = a*b;
    cout<<"Multiplication = "<<result<<endl;
}

void division (int a, int b)
{
    float result = (float)a/b;
    cout<<"Division = "<<result<<endl;
}
