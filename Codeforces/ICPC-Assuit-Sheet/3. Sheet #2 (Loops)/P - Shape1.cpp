// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for(int j = n-i; j > 0; j--){
            cout <<"*";
        }
        cout << endl;
    }
    
    
    
    return 0;
}