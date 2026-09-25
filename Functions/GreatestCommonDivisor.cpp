#include<iostream>
using namespace std;
int gcd(int x,int y){
    int store = 1;
    for(int i=1;i<=min(x,y);i++) 
    // or alternate way would be 
    // for(int i=min(x,y),i>=i;i--){
    //     if(x%i==0 && y%i==0){
    //         store = i;
    //         break;
    //     }
    // }
    {
        if(x%i==0 && y%i==0){
            store = i;
        }
    }
    return store;
}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"The greatest common divisor of "<<a<<" and "<<b<<" is : "<<gcd(a,b);
}