#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public:
        int id;
        double gpa;

        void display() //function call.
        {
            cout<<id<<endl;
            cout<<gpa<<endl;
        }

        void setValue(int x, double y)
        {
            id = x;
            gpa = y;
        }
};

int main(){

    Student Alim, Suporna;
    Alim.setValue(2545, 3.55);
    Alim.display();

    cout<<endl;
    Suporna.setValue(1253, 2.55);
    Suporna.display ();

    getch();
}

