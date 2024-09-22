#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int count = 0;
        unsigned int n;
        cin >> n;
        signed long long int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (j == i || arr[j] >= arr[j - 1]) {
                    count++;
                } else {
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
