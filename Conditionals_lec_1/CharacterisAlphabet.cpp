#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    int ascii = (int)ch;
    if( ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
        cout<<"The given character is alphabet";
    }
    else{
        cout<<"The given character is not alphabet";
    }
}