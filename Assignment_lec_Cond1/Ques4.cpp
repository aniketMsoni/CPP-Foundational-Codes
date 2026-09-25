// Whether Area is greater than perimeter of a rectangle with given lenght and breadth
#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter lenght of the rectangle : ";
    cin>>l;
    cout<<"Enter breadth of the rectangle : ";
    cin>>b;

    int per = 2*( l + b );
    int area = l * b;

    if(area>per){
        cout<<"Area is greater than perimeter";
    }
    else if(per==area){
            cout<<"Area is equal to perimeter";
        }
    else{
        cout<<"Area is not greater than perimeter";
    }
    }
    
