// Predict the output
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter first number \n";
    cin>>x;
    int y,m;
    cout<<"enter second number and value for taking modulus \n ";
    cin>>y>>m;
    int z = ( x * y ) % m;
    cout<<"Output is : "<<z;
}
