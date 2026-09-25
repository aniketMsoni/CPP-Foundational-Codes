#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"Enter the number of terms of AP : ";
    cin>>n;
    
    //Method 1 : Using mathematical AP formula
    for(int i=1;i<=(2*n-1);i+=2){
        cout<<i<<" ";
    }

    cout<<endl;

    //Method 2 : Using separate variable 
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a+=2;
    }
}