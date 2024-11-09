// Online C++ compiler to run C++ program online
#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    float temp[5];
    float hum[5];

    float totalTemp = 0;
    float totalHum = 0;

    cout<<"Please input 5 Days of Temp and Hum value\n"<<endl;

    // taking user input
    for(int i=0; i<5; i++){
        cout<<"Temp of day "<<i<<": ";
        cin>>temp[i];
        cout<<"Hum of day "<<i<<": ";
        cin>>hum[i];
    }

    cout<<"\nOutput Below: \n\n"<<endl;

    // showing output
    for(int i=0; i<5; i++){

        // to show all data of an array
        cout<<"Temp of day "<<i<<": "<<temp[i]<<endl;
        cout<<"Hum of day "<<i<<": "<<hum[i]<<endl;

        // total value calculation
        totalTemp = totalTemp + temp[i];
        totalHum = totalHum + hum[i];

        // weather condition
        if(temp[i]>=13 && temp[i]<=18 && hum[i]>=30 && hum[i]<=45){
            cout<<"Day - "<<i<<": The weather is Dry"<<endl;
        }
        else if(temp[i]>=19 && temp[i]<=25 && hum[i]>=50 && hum[i]<=70){
            cout<<"Day - "<<i<<": The weather is Cloudy"<<endl;
        }
        else if(hum[i]==100){
            cout<<"Day - "<<i<<": The weather is Rainy"<<endl;
        }
        else if(temp[i]>25 && hum[i]>=60 && hum[i]<=70){
            cout<<"Day - "<<i<<": The weather is Sunny"<<endl;
        }
        else{
            cout<<"Day - "<<i<<": Invalid!!"<<endl;
        }
    }

    // avg calculation: total/size
    cout<<"Avg Temp: "<<totalTemp/5<<endl;
    cout<<"Avg Hum: "<<totalHum/5<<endl;

    getch();
}
