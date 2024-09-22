// Online C++ compiler to run C++ program online
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    // Write C++ code here
    unsigned long long int n1, n2, sum = 0;
    cin >> n1 >> n2;
    n1 %= 10;
    n2 %= 10;
    sum = n1 + n2;
    cout << sum;
    

    return 0;
}