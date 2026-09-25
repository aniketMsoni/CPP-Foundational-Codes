#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact *= i;
    }
    return fact;
}
int permutation(int n,int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}
int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"The permutation is : "<<permutation(n,r)<<" and combination is : "<<combination(n,r);
    return 0;
}