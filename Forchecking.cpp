#include<bits/stdc++.h>
 using namespace std;
 int main(){
    cout<<(int)-6.7;

// for(int i=1;i<=n;i++){
//   for(int j=1;j<=n;j++){
//     cout<<i;
//   }
//   cout<<endl;
// }

// for(int i=1;i<=n;i++){
//   for(int j=1;j<=i;j++){
//     cout<<i;
//   }
//   cout<<endl;
// }

// for(int i=1;i<=n;i++){
//   for(int j=1;j<=n+1-i;j++){
//     cout<<i;
//   }
//   cout<<endl;
// }



// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//   //spaces 
//   for(int j=1;j<=i;j++){
//     cout<<" ";
//   }
//   for(int k=1;k<=n-i;k++){
//     cout<<"*";
//   }
//   cout<<endl;
// }

//Print the asked pattern
// {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         //Spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<" "<<" ";
//         }
//         //Stars
//         for(int j=1;j<=n;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     }
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j+=2){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i-1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // int n,r=0,ld;
    // cin>>n;
    // while(n!=0){
    //     r*=10;
    //     ld = n % 10;
    //     r = ld + r;
    //     n/=10;

    // }
    // cout<<r;
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
    cout<<*ptr<<" "<<*ptr2;
    return 0;
}