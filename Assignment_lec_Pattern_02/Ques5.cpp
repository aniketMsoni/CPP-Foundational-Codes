//Print the asked pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int temp = 1;
    for(int i=1;i<=2*n-1;i++){
        if(i<n){
            cout<<temp;
            temp++;
        }
        else{
            cout<<temp;
            temp--;
        }
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int store = 1;
        for(int j=1;j<=n-i;j++){
            cout<<store;
            store++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            
        }
        for(int l=1;l<=n-i;l++){
            store--;
            cout<<store;            
        }
        //spaces

        cout<<endl;
    }

}
