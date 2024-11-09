#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    int classesHeld, attendant;
    double attendancePercentage;

    cout<<"Total classes held: ";
    cin>>classesHeld;

    cout<<"Total attended classes: ";
    cin>>attendant;

    attendancePercentage = ((float) attendant/classesHeld)*(float) 100;
    cout<<"Attendance: "<<attendancePercentage<<endl;

    if(attendancePercentage >= 80){
        cout<<"The student will be allowed to sit for the exam"<<endl;
    }
    else {
        cout<<"The student will be not allowed to sit for the exam";
    }

    getch ();
}
