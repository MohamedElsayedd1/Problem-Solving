// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int n;
    cin >> n;
    for(int i = 1; i <= 12; i++){
        cout << n << " * " << i << " = " << i * n << endl;
    }
    return 0;
}