//Print the asked pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int al = 64;
    for(int i=1;i<=2*n-1;i++){
        cout<<(char)(al+i)<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        //alphabets
        al = 65;
        for(int j=1;j<=n-i;j++){
            cout<<(char)(al)<<" ";
            al++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" "<<" ";
            al++;
        }
        for(int l=1;l<=n-i;l++){
            cout<<(char)(al)<<" ";
            al++;
        }
        //spaces

        cout<<endl;
    }

}