// Determine whether a point lies on x-axis,y-axis or origin
#include<iostream>
using namespace std;
int main(){
    int x , y;
    cout<<"Enter x coordinate : ";
    cin>>x;
    cout<<"Enter y coordinate : ";
    cin>>y;

    if(x!=0 && y==0){
        cout<<"Point lies on x-axix";
    }
    else if(x==0 && y!=0){
        cout<<"Point lies on y-axix";
    }
    else{
        cout<<"Point lies on origin or between xy plane";
    }
    }