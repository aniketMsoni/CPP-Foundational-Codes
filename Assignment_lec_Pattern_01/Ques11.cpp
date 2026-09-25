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
        for(int k=1;k<=i;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){   
        //spaces 
        for(int j=1;j<=i;j++){
            cout<<" "<<" ";
        }
        for(int k=1;k<=n-i;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
