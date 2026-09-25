// Whether Area is greater than perimeter of a circle with given radius
#include<iostream>
using namespace std;
int main(){
    int rad, PI = 3.14;
    cout<<"Enter radius of circle : ";
    cin>>rad;

    int cir = 2 * PI * rad;
    int area = PI * rad * rad;

    if(area>cir){
        cout<<"Area is greater than Circumference";
    }
    else{
        cout<<"Area is not greater than Circumference";
    }
}