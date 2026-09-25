#include<iostream>
using namespace std;
void change(int *ptr1,int *ptr2,int n){
    *ptr2 = n % 10;
    while(n>9){
        n/=10;
    }
    *ptr1 = n;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int FirstDigit,LastDigit;
    int* ptr1 = &FirstDigit;
    int* ptr2 = &LastDigit;
    change(ptr1,ptr2,n);
    cout<<FirstDigit<<" "<<LastDigit;
}