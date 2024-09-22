#include <iostream>
using namespace std;

unsigned long long int Log_2(unsigned long long int n) {
    if (n <= 1) {
        return 0;
    }
    return 1 + Log_2(n / 2);
}

int main() {
    unsigned long long int n;
    cin >> n;
    
    cout << Log_2(n) << endl;
    
    return 0;
}
