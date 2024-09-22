// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    char x;
    cin >> x;
    if(x == 'z'){
        x = 96;
    }
    cout << (char)((int)x + 1);

    return 0;
}