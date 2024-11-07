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

        Student (int x, double y)
        {
            id = x;
            gpa = y;
        }
};

int main(){

    Student Alim(2545, 3.55);;
    Alim.display();

    cout<<endl;

    Student Suporna(1253, 2.55);
    Suporna.display();

    getch();
}

