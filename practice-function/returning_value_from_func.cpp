#include<iostream>
#include<conio.h>
using namespace std;

double addition(double, double);


int main()
{
   double result = addition(20.56,45.74);
   cout<< result;

    getch();
}

double addition (double a, double b)
{
    double sum = a+b;
    return sum;
}

