//Print all armstrong numbers between 1 and 500
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int temp = i;
        int sum = 0;
        while(temp){
            int ld = temp % 10;
            sum += (ld*ld*ld) ;
            temp/=10;    
            }
        
        if(sum==i) cout<<i<<endl;
    }
}