#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int a = 1;
        for(int j=1;j<=n-i;j++){
            cout<<a;
            a++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
        for(int j=1;j<=n-i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}