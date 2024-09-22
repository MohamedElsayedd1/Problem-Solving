
#include <iostream>
using namespace std;


int main() {
    unsigned long long int n1, n2;
    cin >> n1 >> n2;
    
    unsigned long long int min, max;
    min = n1 < n2 ? n1 : n2;
    max = n1 > n2 ? n1 : n2;
    
    unsigned long long int lcm, gcd;
    
    while (n2 != 0) {
        unsigned long long int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    gcd = n1;

    lcm = (min*max)/gcd;
    
    cout << gcd << " " << lcm;
    

    return 0;
}