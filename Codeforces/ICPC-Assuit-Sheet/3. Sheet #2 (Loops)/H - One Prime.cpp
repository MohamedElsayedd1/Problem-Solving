// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    unsigned long int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
        if(n % i == 0 && i != n){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}