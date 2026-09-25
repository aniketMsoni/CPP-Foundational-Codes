//Print area of a circle with a user defined radius
#include<iostream>
using namespace std;
float areaCircle(int r){
    return 3.14*r*r;
}
int main(){
    int rad;
    float result = 0;
    cout<<"Enter radius : ";
    cin>>rad;
    result = areaCircle(rad);
    cout<<"Area of circle is : "<<result;
    return 0;
}