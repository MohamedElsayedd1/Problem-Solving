#include <iostream>
#include <climits>
using namespace std;

signed long long Get_MAX(signed long long *arr, int size) {
    signed long long currentMax = LLONG_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > currentMax)
            currentMax = arr[i];
    }
    return currentMax;
}

int main() {
    int n;
    cin >> n;
    
    signed long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    signed long long maxValue = Get_MAX(arr, n);
    cout << maxValue << endl;
    
    return 0;
}
