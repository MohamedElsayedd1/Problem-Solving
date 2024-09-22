#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;
    
    if(n == 2){
        cout << "YES";
    }
    else if(n < 2 || n % 2 == 0){
        cout << "NO";
    }
    else{
        bool isPrime = true;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                isPrime = false;
                cout << "NO";
                return 0;
            }
        }
        if(isPrime)
            cout << "YES";
    }

    return 0;
}