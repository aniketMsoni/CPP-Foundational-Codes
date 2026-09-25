#include<iostream>
using namespace std;
int main(){
    //Method 1
    int a =100;
    for(int i=100;i>0;i++){
        if(a>0){
            cout<<a<<" ";
            a-=3;
        }
    }

    cout<<endl;

    //Method 2=4
    for(int i=100;i>0;i-=3){
            cout<<i<<" ";
    }

    cout<<endl;

    //Method 3
    a=100;
    for(  ;a>0; ){
        cout<<a<<" ";
        a-=3;
    }

    cout<<endl;

    //Method 4=2
    for(int a=100;a>0;a-=3){
        cout<<a<<" ";
    }

}