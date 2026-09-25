#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter an integer : ";
    cin>>x;
    if(x<0){
        x = -x;
    }
       cout<<"The absolute value of the given integer is : "<<x;
}