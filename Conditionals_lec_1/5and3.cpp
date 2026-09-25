#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter an integer : ";
    cin>>x; 
    /* Alternate way to doing the task by 
    if(x%15==0)
    */
    if(x%3==0 && x%5==0){
        cout<<"The number is divisible by both 5 and 3";
    }
    else{
     cout<<"The number is not divisible by 5 and 3";
      
    }
}