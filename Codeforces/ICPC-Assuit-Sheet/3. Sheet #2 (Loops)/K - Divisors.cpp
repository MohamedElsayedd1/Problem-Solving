// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
        }
    }
    
    return 0;
}