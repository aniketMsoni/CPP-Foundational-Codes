// Predict the output
#include<iostream>
using namespace std;
int main(){
    int test = 0;
    cout<<"First character "<<'1'<<endl;
    cout<<"Second character "<<(test ? 3 : '1')<<endl; // Here in ternary operator output, instead of character '1' output is 49 because ASCII value is printed 
    return 0;
}