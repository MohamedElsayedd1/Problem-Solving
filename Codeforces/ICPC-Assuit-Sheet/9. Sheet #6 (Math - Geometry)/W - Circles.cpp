#include <iostream>
#include <cmath>
using namespace std;

int main() {
    signed long long int X[4];
    signed long long int Y[4];
    
    for(int i = 0; i < 4; i++) {
        cin >> X[i] >> Y[i];
    }
    
    double C1[2];
    double C2[2];
    
    C1[0] = (double)(X[0] + X[1]) / 2;
    C1[1] = (double)(Y[0] + Y[1]) / 2;
    
    C2[0] = (double)(X[2] + X[3]) / 2;
    C2[1] = (double)(Y[2] + Y[3]) / 2;
    
    double r1 = sqrt(pow(X[0] - C1[0], 2) + pow(Y[0] - C1[1], 2));
    double r2 = sqrt(pow(X[2] - C2[0], 2) + pow(Y[2] - C2[1], 2));

    double distance = sqrt(pow(C1[0] - C2[0], 2) + pow(C1[1] - C2[1], 2));
    
    if (distance <= (r1 + r2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
