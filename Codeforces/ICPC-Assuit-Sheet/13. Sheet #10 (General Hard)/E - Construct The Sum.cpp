#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        long long n, s;
        cin >> n >> s;
        if (n >= s) {
            cout << 1 << " " << s << endl;
            continue;
        }
        long long max_sum = n * (n + 1) / 2;
        if (max_sum < s) {
            cout << -1 << endl;
            continue;
        }
        vector<long long> result;
        long long current_sum = s;
        for (long long i = n; i > 0 && current_sum > 0; --i) {
            if (current_sum >= i) {
                result.push_back(i);
                current_sum -= i;
            }
        }
        if (current_sum > 0) {
            result.back() += current_sum;
        }
        cout << result.size() << " ";
        for (size_t i = 0; i < result.size(); ++i) {
            if (i > 0) cout << " ";
            cout << result[i];
        }
        cout << endl;
    }
    
    return 0;
}
