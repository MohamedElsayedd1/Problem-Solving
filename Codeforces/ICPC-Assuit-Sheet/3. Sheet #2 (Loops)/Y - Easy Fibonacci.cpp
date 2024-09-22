#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Edge case for n = 0
    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }

    // Initialize variables for Fibonacci sequence
    long long fib1 = 0; // First Fibonacci number
    long long fib2 = 1; // Second Fibonacci number

    // Print first Fibonacci number
    cout << fib1;

    // Print subsequent Fibonacci numbers up to nth Fibonacci
    for (int i = 1; i < n; ++i) {
        cout << " " << fib2;
        long long nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }

    cout << endl;

    return 0;
}
