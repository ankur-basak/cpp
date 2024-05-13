/*Create a function getAverage (int num1, int num2, int num3) that calculates the average of
three integers. Call this function in main with user-provided numbers and print the average.*/


#include<iostream>
#include<conio.h>
using namespace std;

void getAverage(int num1, int num2, int num3)
{
    double average=(num1+num2+num3)/3;
    cout<<"Average : "<<average;
}

int main()
{
    int a, b, c;

    cout<<"Enter First number : ";
    cin>>a;
    cout<<"Enter Second number : ";
    cin>>b;
    cout<<"Enter Third number : ";
    cin>>c;

    getAverage(a,b,c);

    getch();
}

