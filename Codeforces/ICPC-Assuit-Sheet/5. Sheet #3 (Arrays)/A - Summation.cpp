#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long int n ;
    cin >> n;
    signed long long int x;
    signed long long int sum = 0;
    while(n--){
        cin >> x;
        sum +=x;
    }

    cout << abs(sum);

    return 0;
}