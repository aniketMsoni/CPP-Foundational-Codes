#include<iostream>
using namespace std;
int swap(int a,int b){
    int temp;
    temp = a;
    a = b; 
    b = temp;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b;

    
}