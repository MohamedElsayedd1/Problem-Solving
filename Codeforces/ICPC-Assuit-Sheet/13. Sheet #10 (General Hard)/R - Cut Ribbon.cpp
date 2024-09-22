
#include <iostream>
#include <climits>
using namespace std;


int main() {
    long long res, n1, n2, n3;
    cin >> res >> n1 >> n2 >> n3;
    
    int x = 0;
    
    for(int i = 0; i <= res; i++){
        for(int j = 0; j <= res; j++){
            int k = (res - n1 * i - n2 * j) / n3;
            if(k < 0){
                k = 0;
            }
            if(((n1 * i) + (n2 * j) + (n3 * k)) == res){
                x = max(x, i+j+k);
            }
        }
    }
    
    cout << x;

    return 0;
}