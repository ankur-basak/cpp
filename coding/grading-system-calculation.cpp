#include<iostream>
#include<conio.h>
using namespace std;

int main() {

    int arr [5];
    int i, mark;
    string grade;
    double cgpa, totalcgpa = 0;

    for (i = 0; i<5; i++)
    {
        cout<<"Enter number of index "<<i<<": ";
        cin>>arr[i];
    }
    for (i = 0; i<5; i++){
        cout<<"\nvalues of arr["<<i<<"]: "<<arr[i]<<endl;
        mark = arr[i];

        if(mark>= 90) {
            grade = "A+";
            cgpa = 4.00;
        }
        else if(mark>=85) {
            grade = "A";
            cgpa = 3.75;
        }
        else if(mark>= 80) {
            grade = "B+";
            cgpa = 3.50;
        }
        else if(mark>= 75) {
            grade = "B";
            cgpa = 3.25;
        }
        else if (mark>= 70) {
            grade = "C+";
            cgpa = 3.00;
        }
        else if(mark>= 65) {
            grade = "C";
            cgpa = 2.75;
        }
        else if(mark>= 60) {
            grade = "D+";
            cgpa = 2.50;
        }
        else if(mark>= 50) {
            grade = "D";
            cgpa = 2.25;
        }
        else if(mark<50) {
            grade = "F";
            cgpa = 0.00;
        }

        cout <<"The Grade is: "<< grade <<endl;
        cout <<"The CGPA is: "<< cgpa <<endl;

        totalcgpa = totalcgpa + cgpa;
    }

    cout << "\nTotal CGPA: " << totalcgpa/5;

getch ();

}

