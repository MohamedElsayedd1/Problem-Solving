#include <iostream>
using namespace std;

int main() {
    signed long long L1[4];
    signed long long L2[4];
    
    for (int i = 0; i < 4; i++) {
        cin >> L1[i];
    }
    
    for (int i = 0; i < 4; i++) {
        cin >> L2[i];
    }
    
    // Cross-multiplication to check parallelism
    long long slope1 = (L1[3] - L1[1]) * (L2[2] - L2[0]);
    long long slope2 = (L1[2] - L1[0]) * (L2[3] - L2[1]);
    
    if (slope1 == slope2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
