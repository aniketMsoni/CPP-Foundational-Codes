#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number : ";
    cin>>x;
    if(x>0)
    {
        cout<<"the absolute of the number is : "<<x;
    }
    else // Here x is less than or equal to 0 but here problem is that we are changing the value in the variable  
    {
         x = (-x);
       cout<<"the absolute of the number is : "<<x; 
    }
    return 0;
}