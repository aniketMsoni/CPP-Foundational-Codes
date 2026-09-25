#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *ptr = &x;
    int **pptr = &ptr;

    //address printing
    cout<<&x<<endl; //address of x
    cout<<ptr<<endl; //address of x
    cout<<pptr<<endl; //address of ptr
    cout<<&pptr<<endl; //address of pptr

    //accessing x using dereference operator
    cout<<x<<endl; //value of x
    cout<<*ptr<<endl; //value of x
    cout<<**pptr<<endl; ////value of x

    //accessing others elements using dereference operator
    cout<<x<<endl; //value of x
    cout<<*ptr<<endl; //value of x
    cout<<*pptr<<endl; //value of ptr

}