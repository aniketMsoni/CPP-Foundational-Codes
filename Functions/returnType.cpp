#include<iostream>
using namespace std;
int sum(int x,int y){
    int add = x + y;
    return add;
}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Addition is : "<<sum(a,b);

}