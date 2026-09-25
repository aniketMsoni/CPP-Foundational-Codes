//Print the asked pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
     for(int i=1;i<=n-1;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}