// Counts minimum notes for a given amount
#include<iostream>
using namespace std;
int main(){
    long amount;
    long n1,n2,n5,n10,n20,n50,n100,n200,n500; // here n notes of different denomination carries count of a particular denomination note
    n1=n2=n5=n10=n20=n50=n100=n200=n500=0;

    cout<<"Enter the amount whose minimum notes are required : ";
    cin>>amount;

   switch(amount>=500){
        case 1 :
        n500 = n500 + amount/500;
        amount = amount - n500*500;
        break;
    }
    switch(amount>=200){
        case 1 :
        n200 = n200 + amount/200;
        amount = amount - n200*200;
        break;
    }
    switch(amount>=100){
        case 1 :
        n100 = n100 + amount/100;
        amount = amount - n100*100;
        break;
    }
    switch(amount>=50){
        case 1 :
        n50 = n50 + amount/50;
        amount = amount - n50*50;
        break;
    }
    switch(amount>=20){
        case 1 :
        n20 = n20 + amount/20;
        amount = amount - n20*20;
        break;
    }
    switch(amount>=10){
        case 1 :
        n10 = n10 + amount/10;
        amount = amount - n10*10;
        break;
    }
    switch(amount>=5){
        case 1 :
        n5 = n5 + amount/5 ;
        amount = amount - n5*5;
        break;
    }
    switch(amount>=2){
        case 1 :
        n2 = n2 + amount/2;
        amount = amount - n2*2;
        break;
    }
    switch(amount>=1){
        case 1 :
        n1 = n1 + amount;
        amount = amount - n1*1;
        break;
    }

    cout<<"Notes of 500 : "<<n500<<endl;
    cout<<"Notes of 200 : "<<n200<<endl;
    cout<<"Notes of 100 : "<<n100<<endl;
    cout<<"Notes of 50 : "<<n50<<endl;
    cout<<"Notes of 20 : "<<n20<<endl;
    cout<<"Notes of 10 : "<<n10<<endl;
    cout<<"Notes of 5 : "<<n5<<endl;
    cout<<"Notes of 2 : "<<n2<<endl;
    cout<<"Notes of 1 : "<<n1<<endl;


}