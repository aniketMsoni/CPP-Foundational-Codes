#include<iostream>
using namespace std;
int main(){
    int *ptr = NULL; //reserved address
    cout<<ptr; //0x0
    int *p = 0;
    int *ptr2 = '\0';
    cout<<endl<<p<<endl<<ptr2;
}