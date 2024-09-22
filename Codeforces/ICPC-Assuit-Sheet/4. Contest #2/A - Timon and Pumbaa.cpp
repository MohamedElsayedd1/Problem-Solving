// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    signed long long int n1, n2;
    cin >> n1 >> n2;
    signed long long int v = n1 - n2;
    if(v >= 0){
        cout << (n1 - n2);
    }
    else{
        cout << "0";
    }

    return 0;
}