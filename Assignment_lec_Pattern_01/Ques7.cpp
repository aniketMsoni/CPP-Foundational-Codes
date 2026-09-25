//Print the asked pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //Spaces
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        //Stars
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
        //Spaces
        for(int j=1;j<=i-1;j++){
            cout<<" "<<" ";
        }
        //Stars
        for(int k=1;k<=n;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    }
    