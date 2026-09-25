// Determine which student scored least among three students
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the marks of the 1st student : ";
    cin>>a;
    cout<<"Enter the marks of the 2nd student : ";
    cin>>b;
    cout<<"Enter the marks of the 3rd student : ";
    cin>>c;

    // if(a>b){ // Marks of 1st is greater than 2nd
    //     if(a>c){ 
    //         cout<<"Marks of 1st student is highest";
    //     }
    //     else{ // Marks of 3rd is greater than 1st and 2nd
    //         cout<<"Marks of 3rd student is highest";
    //     }
    // }
    // else{ // Marks of 1st is less than 2nd
    //     if(b>c){
    //        cout<<"Marks of 2nd student is highest"; 
    //     }
    //     else{ // Marks of 3rd is greater than 1st and 2nd
    //         cout<<"Marks of 3rd student is highest";
    //     }
    // }


    if(a<=b && a<=c){
        cout<<"A has least marks";
    }
    else if(b<=a && b<=c){
        cout<<"B has least marks";
    }
    else{
        cout<<"C has least marks";
    }
}