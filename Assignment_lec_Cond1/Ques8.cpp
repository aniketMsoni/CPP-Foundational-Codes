// To determine whether three point lie on straight or not
#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter first point coordinates : ";
    cin>>x1>>y1;
    cout<<"Enter second point coordinates : ";
    cin>>x2>>y2;
    cout<<"Enter third point coordinates : ";
    cin>>x3>>y3;

    int slope1=(y2-y1)/(x2-x1);
    int slope2=(y3-y2)/(x3-x2);

    if(slope1==slope2){
        cout<<"All the point lie on a straight line";
    }
    else{
        cout<<"The given point doesn't lie on a straight line";
    }
}