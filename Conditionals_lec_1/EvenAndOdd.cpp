#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%2==0){
        cout<<"The given number is even";
    }
    /*  Another way without using else condition
    if(n%2!=0){
        cout<<"The given number is odd";
    }
    */
    else{
        cout<<"The given number is odd";
    }
    return 0;
    
}