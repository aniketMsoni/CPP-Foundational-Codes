#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
        for(int i=1;i<=x;i++){
            f *= i;
            cout<<"Factorial of "<<i<<" is "<<f<<endl;
        }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    fact(n);
}