#include<iostream>
using namespace std;
int main(){
    // 2nd program output prediction of the lecture
    int x=3,y,z;
    y=x=10;
    z=x<10;
    cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    
    //3rd program output prediction of the lecture
    int k = 35;
    cout<<(k==35)<<endl<<(k==50)<<endl<<(k>40)<<endl;

    //4th program output prediction of the lecture
    int i = 65;
    char j = 'A';
    if(i==j) // ascii value of j is compared with integer i
        cout<<"P stands for PhysicsWallah";
    else 
        cout<<"P stands for pwskills";
}