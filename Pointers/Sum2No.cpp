#include<iostream>
using namespace std;
int main(){
    int x;
    int* p1 = &x;
    int y;
    int* p2 = &y;
    cout<<"Enter first number : ";
    cin>>*p1;
    cout<<"Enter second number : ";
    cin>>*p2;
    cout<<x+y;
}