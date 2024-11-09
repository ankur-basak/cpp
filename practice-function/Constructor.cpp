#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        int id;
        float gpa;

        void Display()
        {
            cout<< "Student id is:  "<< id << " and his gpa: "<< gpa<<endl;
        }

        student (int x, float y)
        {
           id = x;
           gpa = y;
        }
};

int main(){

    student Ankur (1127, 3.52);
    Ankur.Display();


    student Akash (1128, 3.75);
    Akash.Display();

    getch();
}

