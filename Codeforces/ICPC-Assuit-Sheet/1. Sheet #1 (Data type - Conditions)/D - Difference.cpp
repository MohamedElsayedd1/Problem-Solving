// Online C++ compiler to run C++ program online
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    // Write C++ code here
    signed long long int x, y, z, m, sum = 0;
    cin >> x >> y >> z >> m;
    sum = (x*y) - (z*m);
    cout << "Difference = " << sum;
    

    return 0;
}