// Greatest among two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;

    if(a>b){
        cout<<"First number "<<a<<" is the greatest";
    }

    else{ // a<=b
            cout<<"Second number "<<b<<" is the greatest";
    }
}