//Find the sum of all the even digits of a given number
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,lastdigit;
   int sum=0;
   cout<<"Enter the number : ";
   cin>>n;
   while(n!=0){
    lastdigit=n%10;
    // sum+=((lastdigit%2==0)? lastdigit : 0);
    if(lastdigit%2==0){
        sum += lastdigit;
    }
   }
   cout<<"Sum of even digits of the given number is : "<<sum;
}