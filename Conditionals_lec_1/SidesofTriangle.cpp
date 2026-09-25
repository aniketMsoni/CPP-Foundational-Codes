#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if( (a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"The given numbers are side of a triangle";
    }
    else{
        cout<<"The given numbers are not side of a triangle";
    
    }
}