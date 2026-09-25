// Calculating the volume of cylinder
#include<iostream>
using namespace std;
int main(){
    float rad , h;
    float Pi = 3.1415;
    cout<<"enter radius and height of the cylinder : ";
    cin>>rad>>h;
    float vol = Pi * rad * rad * h;
    cout<<vol ;
    return 0;
}