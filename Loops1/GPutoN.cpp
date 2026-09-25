#include<iostream>
using namespace std;
int main(){
    int a=1,n;
    cout<<"Enter the number of terms of AP : ";
    cin>>n;
    // 1 2 4 8 16 ... n terms
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a*=2;
    }
}