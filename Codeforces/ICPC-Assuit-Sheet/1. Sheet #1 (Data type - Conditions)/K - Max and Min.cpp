// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Write C++ code here
    signed long int x, y, z;
    signed long int min, max;
    cin >> x >> y >> z;
    min = x;
    max = x;
    if(y < min){
        min = y;
    }
    if(z < min){
        min = z;
    }
    if(y > max){
        max = y;
    }
    if(z > max){
        max = z;
    }
    cout << min << " " << max;
    

    return 0;
}