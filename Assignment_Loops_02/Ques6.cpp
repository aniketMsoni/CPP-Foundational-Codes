//Find sum of the given number and it's reverse
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,lastdigit,r=0;
    cout<<"Enter the number : ";
    cin>>n;
    int a=n;
    while(n!=0){
        lastdigit=n%10;
        r*=10;
        r+=lastdigit;
        n/=10;
    }
    cout<<"The required sum is : "<<r+a; 
}