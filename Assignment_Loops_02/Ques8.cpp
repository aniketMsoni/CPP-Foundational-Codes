//Print fibonacci series upto n terms
#include<bits/stdc++.h>
using namespace std;
int main(){
    // fibonacci series --> 1 1 2 3 5 8 13 21 34 55 89
    int a=1,b=1,sum=0,n;
    cout<<"Enter the number till series is required : ";
    cin>>n;
    cout<<a<<" ";
    for(int i=1;i<=n-1;i++){
        cout<<b<<" ";
        sum=a+b;
        a=b;
        b=sum;
    }
    
}