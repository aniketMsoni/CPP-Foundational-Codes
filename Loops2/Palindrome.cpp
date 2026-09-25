#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0;
    cout<<"Enter the name : ";
    cin>>n;
    int a = n;
    while(n!=0){
        int lastdigit=n%10;
        r*=10;
        r+=lastdigit;
        n/=10;
    }
    if(a==0) cout<<"O is not a palindrome number";
    else if(r==a) cout<<a<<" is a palindrome number.";
    else cout<<a<<" is not a palindrome number.";

}