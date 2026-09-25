#include<iostream>
using namespace std;
int main(){
    int x = 122;
    int *ptr = &x;
    cout<<*ptr;

    *ptr = 125; // Updating using dereference operator
    cout<<endl<<x;
}