// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; 
    }
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true; 
}

int main() {
    long long n;
    cin >> n;
    int x;
    cin >> x;
    
    long long nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int operations[n];
    for(int i = 0; i < n; i++){
        cin >> operations[i];
    }
    
    for(int i = 0; i < n; i++){
        if(operations[i] == 1){
            if(!isPrime(nums[i])){
                cout << -1 << " ";
            }
            else{
                if(nums[i] % 2 == 0){
                    cout << "0 ";
                }
                else{
                    cout << "5 ";
                }
            }
        }
        else{
            cout << "0 ";
        }
    }
    return 0;
}