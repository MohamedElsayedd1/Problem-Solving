#include <iostream>
#include <limits.h>
#include <ctype.h> 
using namespace std; 



int main() {
    unsigned long long int n;
    cin >> n;
    
    if(n == 1){
        cout << "0";
        return 0;
    }
    else if(n == 2){
        cout << "1";
        return 0;
    }
    
    unsigned long long int x = 0;
    unsigned long long int y = 1;
    unsigned long long int fib = 0;
    
    for(unsigned int i = 3; i <= n; i++){ // 1 -> 4
        fib = x + y; // 1 2 3 5
        x = y; // 1 1 2
        y = fib; // 1 2 3
    }
    cout << fib;

    return 0;
}