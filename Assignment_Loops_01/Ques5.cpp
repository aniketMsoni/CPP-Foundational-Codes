// Display the following GP upto n terms -- 3 12 48 ... n terms
#include<iostream>
using namespace std;
int main(){
    int a= 3,n;
    cout<<"Enter the number of terms required : ";
    cin>>n;

    //Method 1
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a * 4;
    }

    cout<<endl;

    //Method 2
    int a1=3,r=4;
    for(int i=1;i<=n;a1*=r){
        cout<<a1<<" ";
        i++;
    }

    cout<<endl;

    //Method 3
    int i =1,a2=3;
    while(i<=n){
        cout<<a2<<" ";
        i++;
        a2*=r;
    }
    }
