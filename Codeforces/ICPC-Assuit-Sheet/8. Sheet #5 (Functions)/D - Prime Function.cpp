#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(long long int n){
    if(n == 2) 
        return true;
    else if(n < 2)
        return false;
    else if(n % 2 ==0)
        return false;
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        long long int n; 
        cin >> n;
        if(isPrime(n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO"<< endl;
        }
    }
    return 0;
}

