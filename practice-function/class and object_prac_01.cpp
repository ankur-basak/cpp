#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public:
    int id;
    double gpa;
};

int main(){

    Student Alim, Suporna;

    Alim.id = 1011;
    Alim.gpa = 3.44;

    cout<<"Alim's id is: "<<Alim.id<<endl;
    cout<<"Alim's gpa is: "<<Alim.gpa<<endl;

    cout<<endl;

    Suporna.id = 1015;
    Suporna.gpa = 2.44;

    cout<<"Suporna's id is: "<<Suporna.id<<endl;
    cout<<"Suporna's gpa is: "<<Suporna.gpa<<endl;

    getch();
}
