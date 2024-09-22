#include <iostream>

using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;
    
    while(n % 2 == 0){
        n /= 2;
    }
    if(n == 1)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}