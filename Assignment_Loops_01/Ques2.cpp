// Print numbers from 1 to 100 which are divisible by 3
#include<iostream>
using namespace std;
int main(){
    // Method 1
    for(int i=1;i<=100;i++){
        if(i%3==0) cout<<i<<endl;
    }

    cout<<endl;

    // Method 2
    for(int i=3;i<=99;i+=3){
        cout<<i<<endl;
    }
}