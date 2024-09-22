#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned long long int t;
    vector<unsigned long long int> vec;
    unsigned long long int n, s;
    cin >> t;
    

    while (t--) {
        cin >> n >> s;  // Vector to store the result
        bool flag = false;

        // Check if the sum of the first n natural numbers is less than s
        if (((n * (n + 1)) / 2) < s) {
            cout << "-1" << endl;
            continue;  // Move to the next test case
        }

        unsigned long long int sum = 0;
        for (unsigned long long int i = n; i >= 1; i--) {
            if (sum + i <= s) {
                sum += i;
                vec.push_back(i);
            }
            if (sum == s) {
                flag = true;
                break;
            }
        }

        if (!flag) {
            cout << "-1" << endl;
        } else {
            for (auto elem : vec) {
                cout << elem << " ";
            }
            cout << endl;
        }

        vec.clear();  // Clear the vector for the next test case
    }

    return 0;
}