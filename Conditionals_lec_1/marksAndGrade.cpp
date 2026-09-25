#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks : ";
    cin>>n;
    
//     if(n>=91 && n<=100){
//         cout<<"Excellent";
//     }
//     if(n>=81 && n<=90){
//         cout<<"Very good";
//     }
//     if(n>=71 && n<=80){
//         cout<<"Good";
//     }
//     if(n>=61 && n<=70){
//         cout<<"Can do better";
//     }
//     if(n>=51 && n<=60){
//         cout<<"Average";
//     }
//     if(n>=40 && n<=50){
//         cout<<"Below average";
//     }
//     if(n<40){
//         cout<<"Fail";
//    }
 




//     if(n>=91){
//         cout<<"Excellent";
//     }
//     else{ // n is less than 91
//         if(n>=81){
//             cout<<"Very good";
//         }
//         else{ // n is less than 81
//             if(n>=71){
//                 cout<<"Good";
//             }
//             else{ // n is less than 71
//                 if(n>=61){
//                      cout<<"Can do better";
//                 }
//                 else{ // n is less than 61
//                     if(n>=51){
//                         cout<<"Average";
//                     }
//                     else{ // n is less than 51   
//                         if(n>=40){
//                             cout<<"Below average";
//                         }
//                         else{
//                             cout<<"Fail";
//                         }
//                     }
//                 }
//             }
//         }
//     }


if(n>=91){
    cout<<"Excellent";
}
else if(n>=81){
    cout<<"Very good";
}
else if(n>=71){
    cout<<"Good";
}
else if(n>=61){
    cout<<"Can do better";
}
else if(n>=51){
    cout<<"Average";
}
else if(n>=40){
    cout<<"Below average";
}
else{
    cout<<"Fail";
}





}