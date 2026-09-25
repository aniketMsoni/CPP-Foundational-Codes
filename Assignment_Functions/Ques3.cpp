//Print odd no between given two numbers a and b
#include<iostream>
using namespace std;
void printOddNo(int a,int b){
    if(a>b){
        for(int i=b+1;i<a;i++){
            if(i%2!=0) cout<<i<<" ";
        }
    }
    else{
        for(int i=a+1;i<b;i++){
            if(i%2!=0) cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    printOddNo(a,b);
    
}