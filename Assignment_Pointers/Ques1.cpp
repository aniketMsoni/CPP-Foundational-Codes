//Multiplication of two numbers using pointers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    int *ptr1 = &a;
    int *ptr2 = &b;

    cout<<"Product of a and b is : "<<(*ptr1)*(*ptr2);
}