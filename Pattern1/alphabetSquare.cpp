#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    //Method 1
    for(int i=1;i<=n;i++){
        for (int j=97;j<=n+96;j++)
        {
            cout<<(char)j;
        }
        cout<<endl;
        
    }

    //Method 2
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}