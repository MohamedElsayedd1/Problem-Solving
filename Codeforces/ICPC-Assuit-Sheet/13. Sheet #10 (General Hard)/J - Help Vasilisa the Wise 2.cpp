// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    
    for(int x = 1; x <= 9; x++){
        for(int y = 1; y <=9 ; y++){
            for(int z = 1; z <=9 ; z++){
                for(int m = 1; m <= 9; m++){
                    if(x != y && x != m && x != z && y != m && y != z && z != m){
                        if(x + y == r1 && z + m == r2 && x + z == c1 && m + y == c2 && x + m == d1 && y + z == d2){
                            cout << x << " " << y << endl;
                            cout << z << " " << m << endl;
                            return 0;
                        }
                    }
                    
                }
            }
        }
    }
    
    cout << -1;

    return 0;
}