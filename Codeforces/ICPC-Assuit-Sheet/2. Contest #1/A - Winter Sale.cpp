#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    double p, x;
    double t;
    cin >> x >> p;
    x = x/100;
    t = p/(1-x);
    cout << t;

    return 0;
}