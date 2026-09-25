// Use of pre and post increment/decrement operator
#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int y = 5;
    x++,y--;
    cout << ++x << " " << y--;
    // Output will be x = 6 and y = 4
    return 0;
}