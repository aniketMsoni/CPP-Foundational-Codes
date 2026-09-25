// Print the table of a number given by the user
#include<iostream>
using namespace std;
int main(){
    int table;
    cout<<"Enter the number whose table is required : ";
    cin>>table;

    //Method 1
    for(int i=1;i<=10;i++){
        cout<<table*i<<endl;
    }

    cout<<endl;

    //Method 2
    int i=1;
    while(i<=10){
        cout<<table*i<<endl;
        i++;
    }

}