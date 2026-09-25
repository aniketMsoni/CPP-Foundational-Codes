#include<iostream>
using namespace std;
int maxThree(int a,int b,int c){
        if(a>b && a>c) return a;
        else if(b>a && b>c) return b;
        else return c;
}
int main(){
    int a = 7, b = 5, c = 9;
    cout<<maxThree(a,b,c);
    return 0;
}