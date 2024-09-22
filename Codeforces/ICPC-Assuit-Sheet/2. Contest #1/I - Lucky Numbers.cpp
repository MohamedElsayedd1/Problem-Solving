// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
    unsigned int n;
    int r, l;
    cin >> n;
    
    r = n % 10;
    l = n / 10;
    if(r % l == 0 || l % r == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}