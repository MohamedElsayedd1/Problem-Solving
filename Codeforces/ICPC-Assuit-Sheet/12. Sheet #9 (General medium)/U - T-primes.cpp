// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;    
    if (num <= 3) return true;   
    if (num % 2 == 0 || num % 3 == 0) return false; 

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}


int main() {
    // Write C++ code here
    long long int n;
    cin >> n;
    
    long long int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i <n; i++){
        double root = sqrt(arr[i]);
        if(isPrime((int)root) && (double)root - (int)root == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}