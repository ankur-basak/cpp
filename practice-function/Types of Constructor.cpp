#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public:
        int id;
        double gpa;

        void display()
        {
            cout<<id<<endl;
            cout<<gpa<<endl;
        }

        Student(int x, double y)
        {
            id = x;
            gpa = y;
        }
        Student()
        {
            cout<<"Default constructor"<<endl;
        }
};

int main(){

    Student ob;

    Student Alim(2545, 3.55);
    Alim.display();

    cout<<endl;

    Student Suporna(1253, 2.55);
    Suporna.display();

    getch();
}


