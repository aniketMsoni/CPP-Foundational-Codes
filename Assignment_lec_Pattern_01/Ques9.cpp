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
            cout<<(char)(64+k)<<" ";
        }
        cout<<endl;
    }

}