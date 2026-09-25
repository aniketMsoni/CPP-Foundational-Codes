// Print odd numbers from 1 to 100
#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i < 100; i+=2)
    {
        cout<<i<<endl;
    }
    
    cout<<endl;

    for(int i=0;i<=100;i++){
        if(i%2!=0) cout<<i<<endl;
    }
}