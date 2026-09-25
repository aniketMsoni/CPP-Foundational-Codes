#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int x = i;
            int y = j;
            if(i>n){
                x = 2*n - i;
            }
            if(j>n){
                y = 2*n - j;
            }
            int result = min(x,y);
            int reqd = n - result + 1;
            cout<<reqd;
        }
        cout<<endl;
    }
}