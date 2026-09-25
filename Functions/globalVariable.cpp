#include<iostream>
using namespace std;
int a = 9; //global
void f(){
    cout<<a;
}
int main(){
    cout<<a<<endl; //undeclared in this function so global identifier is used
    int a = 2; //local
    cout<<a<<endl;
    f();
}