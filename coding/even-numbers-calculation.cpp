#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int num, i, sum = 0;
    cout<<"Enter a integer number: ";
    cin>>num;

    for(i=1; i<=num; i++){
        if(i%2 == 0){
            sum = sum + i;
            cout<<i<<endl;
        }
    }
    cout<<"sum: "<<sum<<endl;

    getch ();

}

