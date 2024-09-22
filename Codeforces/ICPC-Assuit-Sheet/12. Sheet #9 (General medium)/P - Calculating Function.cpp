// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    long long n;
    cin >> n;
    
    long long res = 0;
    
    if (n % 2 == 0) {
        res = n / 2;
    } else {
        res = -(n + 1) / 2;
    }
    
    cout << res;
    return 0;
}