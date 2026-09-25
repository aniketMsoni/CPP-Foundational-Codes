#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter an integer : ";
    cin>>x; 
    // if((x%3==0 || x%5==0) && x%15!=0){
    //     cout<<"The number is divisible by 5 or 3 but not divisible by 15 "; 
    // }
    // else{
    //  cout<<"Conditions are not matched";
    //       }


    if(x%3==0 || x%5==0){
         if(x%15!=0){
            cout<<"The number is divisible by 5 or 3 but not divisible by 15";
         }
         else{
            cout<<"Conditions are not matched";
         }
    }
     else{
        cout<<"Conditions are not matched";
     }

}