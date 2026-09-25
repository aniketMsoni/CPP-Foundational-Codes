// Identifying whether a given character is a alphabet, digit or a special character
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    
    int n = (int)ch;

    if( (n>=97 && n<=122) || (n>=65 && n<=90)){
        cout<<ch<<" is a alphabet";
    }
    else if(n>=48 && n<=57){
        cout<<ch<<" is a digit";
    }
    else{
        cout<<ch<<" is a special character";
    }
    return 0;
    }