#include <iostream>
#include <cmath> // For std::sqrt
using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;

    // Handle special cases for n = 2 separately
    if (n >= 2) {
        cout << 2 << " ";
    }

    for(int i = 3; i <= n; i++) {
        bool isprime = true;
        // Check divisibility from 2 up to square root of i
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
