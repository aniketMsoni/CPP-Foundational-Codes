#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter an integer : ";
    cin>>x; 
    if(x%3==0 || x%5==0){
        cout<<"The number is divisible by 5 or 3";
    }
    else{
     cout<<"The number is not divisible by 5 and it is also not divisible by 3";
          }
}