#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int num, i;
    cout<<"Enter an integer number : ";
    cin>>num;

    if(num>=0){
        cout<<"multiplication table : \n"<<endl;

        for(i=1; i<=10; ++i){
            cout<<num<<" * "<<i<<" = "<<num * i<<endl;
        }
    }

    getch();
}
