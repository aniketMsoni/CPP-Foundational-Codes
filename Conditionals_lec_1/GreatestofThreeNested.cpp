#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
     cout<<"Enter 2nd number : ";
    cin>>b;
     cout<<"Enter 3rd number : ";
    cin>>c;

    // if(a>b){
    //     if(a>c){
    //         cout<<a<<" is the largest";
    //     }
    // }

    // if(b>c){
    //     if(b>a){
    //         cout<<b<<" is the largest";
    //     }
    // }

    // if(c>a){
    //     if(c>b){
    //         cout<<c<<" is the largest";
    //     }
    // }

    if(a>b){
        if(a>c){
            cout<<a<<" is the largest";
        }
        else{ // a>b but a<c therefore c>b>a
            cout<<c<<" is the largest";
        }
    }
    else{ // b is greater than a
        if(b>c){
           cout<<b<<" is the largest"; 
        }
        else{ // b>a but c>b therefore c>b>a
             cout<<c<<" is the largest";
        }
    }


}
