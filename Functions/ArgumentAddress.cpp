#include<iostream>
using namespace std;
void fun(int a,int b){ // formal parameters
    cout<<"Address of fun a : "<<&a<<endl;
    cout<<"Address of fun b : "<<&b<<endl;
}
int main(){
    int a = 2,b = 4;
    cout<<"Address of main a : "<<&a<<endl;
    cout<<"Address of main b : "<<&b<<endl;
    fun(a,b); // actual parameters
}