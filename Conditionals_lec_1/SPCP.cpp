#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter Cost price and Selling price of the item : ";
    cin>>cp>>sp;
    if(sp>cp){
        cout<<"Profit = "<<sp-cp<<endl;
    }
    if(cp>sp){
        cout<<"Loss = "<<cp-sp<<endl;
           }
    if(sp==cp){
        cout<<"No profit or loss";
    }
}