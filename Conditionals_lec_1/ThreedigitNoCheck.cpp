#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter an integer : ";
    cin>>x;
    if(x>=100 && x<1000){
        cout<<"The given number is a 3-digit number";
    }
    else{
        cout<<"The given number is not a 3-digit number";
    }
return 0;
}