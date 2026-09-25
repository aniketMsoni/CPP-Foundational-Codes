#include <iostream>
using namespace std;
bool primeNo(int n){
    bool flag = false; // false means prime
    for (int i = 2; i <= n - 1; i++){
        if (n % i == 0){
            flag = true; // true means composite
            return 0;
        }
    }
    if (flag == false)
        return 1;
}
int main(){
    int num;
    cout << "Enter number : ";
    cin >> num;
    for (int i = num; i > 1; i--){
        if(num%i == 0){
            if (primeNo(i)){
                cout << i << " is the largest prime factor of " << num << endl;
                exit(1);
            }
        }
    }
}