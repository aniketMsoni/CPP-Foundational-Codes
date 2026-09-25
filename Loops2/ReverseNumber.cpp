#include<iostream>
using namespace std;
int main(){
    int n,lastdigit,reverse = 0;
    cout<<"Enter the number : ";
    cin>>n;
    while(n!=0){
        reverse*=10;
        lastdigit=n%10;
        reverse+=lastdigit;
        n/=10;
    } 
    cout<<reverse;
}