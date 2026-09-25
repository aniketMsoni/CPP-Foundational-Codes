#include<iostream>
using namespace std;
int main(){
    int n1=1,n2=1,nth=0;
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=3;i<=n;i++){
        nth = n1 + n2;
        n1 = n2;
        n2 = nth;
    }
    cout<<n2;
}