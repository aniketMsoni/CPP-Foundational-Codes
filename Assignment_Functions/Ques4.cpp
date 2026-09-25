#include<iostream>
using namespace std;
int counter(int n){
    int i = 0;
    while(n!=0){
    n/=10;
    i++;
    }
    return i;
}
int counterSqr(int count){
    return count*count;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int result = counter(n);
    cout<<"The given input has "<<result<<" digits."<<endl;
    cout<<"Square of the count is : "<<counterSqr(result);
}