// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int n;
    unsigned int x;
    cin >> n;
    unsigned long long int fact[n];
    for(int i = 0; i < n; i++){
        cin >> x;
        fact[i] = 1;
        for(int j = 1; j <= x; j++){
            fact[i] *= j;
        }
    }
    for(int i = 0; i < n; i++){
        cout << fact[i] << endl;
    }
    return 0;
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}