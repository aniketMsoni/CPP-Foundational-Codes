//Print squares of n natural numbers
#include<iostream>
using namespace std;
int display(int x){
    int store = x*x;
    return store;

}
int main(){
    int n,result = 0;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        result = display(i);
        cout<<"The square of "<<i<<" is : "<<result<<endl;
    }
}