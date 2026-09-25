#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b respectively : ";
    cin>>a>>b;
    int temp = a;
    a = b; 
    b = temp;
    cout<<"Swapped a and b are : "<<a<<" "<<b<<endl;
    
    int x,y;
    cout<<"Enter x and y respectively : ";
    cin>>x>>y;
    x = x+y;
    y = x-y;

}