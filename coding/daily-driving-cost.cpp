#include<iostream>
#include<conio.h>
using namespace std;

int main(){

        int totalKilometer, costPerLiter, avgKmPerLiter, parkingFees, tollsPerDay;

        cout<<"Enter totalKilometer driven per day: ";
        cin>>totalKilometer;

        cout<<"Enter Cost Per Liter: ";
        cin>>costPerLiter;

        cout<<"Enter Kilometer Per Liter: ";
        cin>>avgKmPerLiter;

        cout<<"Enter Parking Fees: ";
        cin>>parkingFees;

        cout<<"Enter Tolls Per Day: ";
        cin>>tollsPerDay;

        int totalPetrol= totalKilometer/avgKmPerLiter;
        int totalCost= (totalPetrol * costPerLiter) + parkingFees + tollsPerDay;

        cout<<"Totalcost: "<<totalCost;

    getch();
}
