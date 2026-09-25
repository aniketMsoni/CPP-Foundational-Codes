// Determine the type of triangle
#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter side 1 : ";
    cin>>s1;
    cout<<"Enter side 2 : ";
    cin>>s2;
    cout<<"Enter side 3 : ";
    cin>>s3;

    if(s1==s2 && s2==s3){
        cout<<"The triangle is an equilateral triangle";
    }
    else if(s1==s2 || s2==s3 || s3==s1){
        cout<<"The triangle is an isoceles triangle";
    }
    else{
        cout<<"The triangle is an scalene triangle";
    }
}