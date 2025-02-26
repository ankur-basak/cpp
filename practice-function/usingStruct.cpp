#include <iostream>
using namespace std;

struct info
{
    string name;
    int rollno;
};

int main()
{
    info io;

    cout<< "Enter your name: ";
    cin>> io.name;

    cout<< "Enter your roll number: ";
    cin>> io.rollno;

    cout<<"Name: "<< io.name<<endl;
    cout<<"Roll no: "<<io.rollno<<"\n";

    return 0;
}
