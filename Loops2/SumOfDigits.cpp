#include<iostream>
using namespace std;
int main(){
    int n,lastd,sum=0 ;
    cout<<"Enter a number : ";
    cin>>n;
    while(n!=0){
       lastd = n % 10;
       sum = sum + lastd;
       n /= 10;
    }
    cout<<"Sum of corresponding digits are : "<<sum;

}