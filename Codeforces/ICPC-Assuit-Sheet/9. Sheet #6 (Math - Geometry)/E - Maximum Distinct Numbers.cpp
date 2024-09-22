#include <iostream>

using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;
    
    unsigned long long int sum = 0;
    unsigned long long counter = 0;
    
    for(unsigned long long i = 1; i < n; ++i){
        if(sum + i <= n) {
            sum += i;
            ++counter;
        } else {
            break;
        }
    }
    
    cout << counter << endl;

    return 0;
}
