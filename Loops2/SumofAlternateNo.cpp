#include<iostream>
using namespace std;
int main(){
    int sum = 0,n;
    cout<<"Enter a number of terms in the series : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0) sum+=i;
    //     else sum-=i;
    //}
    // cout<<sum;

    if(n%2==0) cout<<-n/2;
    else cout<<-n/2+n;
    
}