#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    //Method 1
    for(int i=1;i<=n;i++){
        // first "i" odd numbers
        for(int j=1;j<=2*i-1;j+=2){
            cout<<j;
        }
        cout<<endl;
    }

    //Method 2
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}