#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int temp = x;
    int *ptr = &x;
    cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl;
    cout<<temp<<endl<<*ptr;
}