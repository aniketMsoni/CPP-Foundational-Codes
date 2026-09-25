#include<iostream>
using namespace std;
void checkFibo(int n){
    int a=0,b=1,y;
    for(int i=0;i<=n;i++){
        y = a+b;
        a = b;
        b = y;
        if(y==n){
            cout<<n<<" lies in Fibonacci Series!!!"<<endl;
            return;
        }
    }
    cout<<n<<" doesn't lie in Fibonacci Series!!!"<<endl;
}
int main(){
    int item;
    cout<<"Enter number to be searched : ";
    cin>>item;
    checkFibo(item);
}