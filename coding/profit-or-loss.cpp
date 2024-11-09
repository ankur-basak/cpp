#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    double buying, selling, difference;

    cout<<"Total buying amount: ";
    cin>>buying;

    cout<<"Total selling amount: ";
    cin>>selling;

    difference = selling-buying;

    if(difference>0){
        cout<<"The seller has made a profit"<<endl;
        cout<<"Profit: "<<difference;
    }
    else if (difference<0){
        cout<<"The seller has not made a profit"<<endl;
        cout<<"Loss: "<<difference;
    }
    else {
        cout<<"No profit no loss"<<endl;
        cout<<"Difference amount: "<<difference;
    }

    getch ();
}

