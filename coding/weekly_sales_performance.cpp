#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    float salesDay[7];
    float salesPerDay = 0;
    double weeklyTotalSale = 0,avg;
    int countOfDay = 0;

        cout<<"Please input 7 Days of Sales\n"<<endl;

    for(int i=0; i<7; i++){
        cout<<"Sales of day "<<i<<": ";
        cin>>salesDay[i];
    }

    cout<<"\nPerformance of company: \n"<<endl;

    for(int i=0; i<7; i++){
        cout<<"Sales of day "<<i<<": "<<salesDay[i]<<endl;

        weeklyTotalSale = weeklyTotalSale + salesDay[i];
    }

    cout<<"Total Weekly sale: "<<weeklyTotalSale<<endl;
    avg = weeklyTotalSale/7;
    cout<<"Avg Sell: "<<avg<<endl;

    for(int i=0; i<7; i++){

        if(avg>salesDay[i]){
            countOfDay += 1;
        }
    }
        cout<<"Count Of Day Below Average: "<<countOfDay<<endl;

    if(weeklyTotalSale>=10000){
        cout<<"Weekly Total Target Achieved"<<endl;
    }
    else{
        cout<<"Weekly Total Target Not Achieved";
    }

    getch();
}
