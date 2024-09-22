#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read number of digits

    string A;
    cin >> A; // Read the digits as a single string

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += A[i] - '0'; // Convert character to integer and accumulate sum
    }

    cout << sum << endl; // Print the total sum of digits

    return 0;
}
