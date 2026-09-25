// Display all uppercase alphabets along with their ASCII values using while loop
#include<iostream>
using namespace std;
int main(){
    //Method 1
    int i=65;
    while(i<=90){
        cout<<(char)i<<" --> "<<i<<endl;
        i++;
    }

    cout<<endl;

    //Method 2
    int j=0;
    while(j<26){
        cout<<(char)(j+'a')<<" --> "<<j+'a'<<endl;
        j++;
    }

}