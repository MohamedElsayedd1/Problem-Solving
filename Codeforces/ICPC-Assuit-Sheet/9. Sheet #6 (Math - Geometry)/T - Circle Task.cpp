#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    signed long long int x,y;
    unsigned long long int r, n;
    cin >> x >> y >> r >> n;
    
    unsigned long long r_square = r*r;
    
    while(n--){
        signed long long int p1, p2;
        cin >> p1 >> p2;
        unsigned long long distance_square = (p1-x)*(p1-x) + (p2-y)*(p2-y);
        
        if (distance_square <= r_square) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}