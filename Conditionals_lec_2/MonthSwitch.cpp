#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter month number : ";
    cin>>x;

    switch(x){
       case 1 : 
            cout<<"January and have 31 days";
            break; 
        case 2 : 
            cout<<"February and have 28 days";
            break;
        case 3 : 
            cout<<"March and have 31 days";
            break;
        case 4 : 
            cout<<"April and have 30 days";
            break;
        case 5 : 
            cout<<"May and have 31 days";
            break; 
        case 6 : 
            cout<<"June and have 30 days";
            break;
        case 7 : 
            cout<<"July and have 31 days";
            break;
        case 8 : 
            cout<<"August and have 31 days";
            break;    
        case 9 : 
            cout<<"September and have 30 days";
            break; 
        case 10 : 
            cout<<"October and have 31 days";
            break;
        case 11 : 
            cout<<"November and have 30 days";
            break;
        case 12 : 
            cout<<"December and have 31 days";
            break; 
        default : 
        cout<<"Invalid month number";   
    }
    }
