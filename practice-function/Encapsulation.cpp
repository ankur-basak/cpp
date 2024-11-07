#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    private:
        string name;
    public:
        void setName(string x)
        {
            name = x;
        }
        string getName()
        {
            return name;
        }
};
int main ()
{
    Student S1;
    S1.setName("Ankur");
    cout<<S1.getName();

    getch();
}
