// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    unsigned long long int n;
    unsigned long long int r = 0;
    cin >> n;
    unsigned long long int x = n;
    while(n != 0){
        r *= 10;
        r += n % 10; 
        n /= 10;
    }
    cout << r << endl;
    if(x == r){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}