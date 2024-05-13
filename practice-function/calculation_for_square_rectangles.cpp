/*Write overloaded versions of the calculateArea function (from question 3) to handle
calculations for squares and rectangles, taking appropriate arguments for length, width, or
side length.*/


#include<iostream>
#include<conio.h>
using namespace std;

double calculateArea(double length)
{
    double square_area = length*length;
    return square_area;
}

double calculateArea(double width,double side_length)
{
    double rect_area=width*side_length;
    return rect_area;
}

int main()
{
    double l,w,sl;

    cout<<"Enter the length of square : ";
    cin>>l;

    cout<<"Enter the width of rectangle : ";
    cin>>w;

    cout<<"Enter the side length of rectangle : ";
    cin>>sl;

    cout<<"Area of square : " <<calculateArea(l)<<endl;
    cout<<"Area of rectangle : "<<calculateArea(w)<<endl;
    cout<<"Area of rectangle : "<<calculateArea(sl)<<endl;

    getch();

}
