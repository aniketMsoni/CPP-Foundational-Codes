//Print the asked pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         //spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<" "<<" ";
//         }
//         //alphabets
//         int a = 64;
//         for(int k=i;k>=1;k--){
//             cout<<(char)(k+a)<<" ";
//         }
//         for(int l=1;l<=i-1;l++){
//             cout<<(char)(l+1+a)<<" ";
//         }
//         cout<<endl;
//     }
// }
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int count = i;
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //alphabets
        int al = 64;
        for(int k=1;k<=2*i-1;k++){
            if(k<=i){
                cout<<(char)(al+count);
                count--;
            }
            else{
                count++;
                cout<<(char)(al+count+1);
            }
        }
        cout<<endl;
    }
    return 0;
}