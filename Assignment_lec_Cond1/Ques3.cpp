// Whether the given year is a leap year or not
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;

    if(year%400==0){ // Distinguishes years like 1500,1700,1900 that are not a leap year from the years like 1600 and 2000 etc
        cout<<year<<" is a leap year";
    }
    else if(year%100==0){ // If a year is not divisible by 400 but divisible by 100 then that year is a leap year
        cout<<year<<" is not a leap year";
    }
    else if(year%4==0){ // If a year is not divisible by 100 and 400 but divisible by 4 then that year is a leap year
        cout<<year<<" is a leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }
    return 0;
    }