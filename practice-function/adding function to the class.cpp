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
};

int main(){

    Student Alim, Suporna;

    Alim.id = 1011;
    Alim.gpa = 3.44;
    Alim.display();


    cout<<endl;

    Suporna.id = 1015;
    Suporna.gpa = 2.44;
    Suporna.display ();

    getch();
}

