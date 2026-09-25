#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    int N = n;
    //Method 1
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int j=1;j<=nsp;j++){
                cout<<" "<<" ";
            }
            nsp--;
            for(int k=1;k<=nst;k++){
                cout<<"*"<<" ";
            }
            nst+=2;
        }
        else // i>n
        {   nsp++;
            for(int j=1;j<=nsp+1;j++){
                cout<<" "<<" ";
            }
            nst-=2;
            for(int k=1;k<=nst-2;k++){
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    int Nsp = N-1;
    int Nst = 1;
    //Method 2
    for(int i=1;i<=2*N-1;i++){
        for(int j=1;j<=Nsp;j++){
            cout<<" "<<" ";
        }
        if(i<=N-1) Nsp--;
        else Nsp++;

        for(int k=1;k<=Nst;k++){
            cout<<"*"<<" ";
        }
        if(i<=N-1) Nst+=2;
        else Nst-=2;
        cout<<endl;
    }
}