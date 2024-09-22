#include <iostream>
using namespace std;

long long sum(long long n) {
    return (n * (n + 1)) / 2;
}
 
int main() {
    long long A, B, X;
    cin >> A >> B >> X;
    
    long long min_val = min(A, B);
    long long max_val = max(A, B);
    
    
    long long max_div = max_val / X;
    long long min_div = (min_val - 1) / X;
    long long result = (sum(max_div) - sum(min_div)) * X;
    
    cout << result;
    
    return 0;
}