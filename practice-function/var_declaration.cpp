#include<iostream>
using namespace std;

void display()
{
    int var = 10;
    int *prt;
    prt = &var;

    cout<< "var: "<<var<<"\n";
    cout<< "var address: "<<&var<<"\n";
    cout<< "Prt: "<<prt<<"\n";
    cout<< "Prt: "<<*prt<<"\n";
}

int main()
{
    display();
    return 0;
}
