#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter an integer : ";
    cin>>x; 
    if(x%5==0){
        if(x%3==0){
            cout<<"The input is divisible by 5 and 3 both";
        }
        else{
            cout<<"The input is divisible by 5 but not by 3";
        }
    }
    else{
       cout<<"Not matching condition"; 
    }
    }