#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<< "Enter a character: "; cin>>x;

    switch(x)
    {
    case 'A':
        cout<<"A";
        break;

    case 'B':
        cout<<"B";
        break;

    default:
        cout<<"Not match (enter either A or B)";
        break;
    }
    return 0;

}
