#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    int a=n;
    while(n!=0){
        int lastdigit = n % 10;
        sum = sum + lastdigit*lastdigit*lastdigit;
        n/=10;
    }
    if(sum==0) cout<<"O is not a armstrong number.";
    else  cout<<a<<" is armstrong number.";
}