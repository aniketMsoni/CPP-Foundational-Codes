// Display the following AP to n terms -- 4 7 10 13 16 ... n terms 
#include<iostream>
using namespace std;
int main(){
    int a=4,n;
    cout<<"Enter the number of terms required : ";
    cin>>n;

    // Method 1
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a + 3;
    }

    cout<<endl;

    //Method 2
    for(int i=4;i<=3*n+1;i+=3){
        cout<<i<<" ";

    }

    cout<<endl;

    //Method 3
    int a1 = 4,d = 3;
    for(int i=1;i<=n;i++){
        cout<< a1 + (i - 1)*d<<" ";
        
    }
}