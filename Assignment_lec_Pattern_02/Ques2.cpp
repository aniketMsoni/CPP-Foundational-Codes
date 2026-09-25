//Print the asked pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        //alphabets
        int a = 64;
        for(int k=1;k<=2*i-1;k++){
            cout<<(char)(k+a)<<" ";
        }
        cout<<endl;
    }
}