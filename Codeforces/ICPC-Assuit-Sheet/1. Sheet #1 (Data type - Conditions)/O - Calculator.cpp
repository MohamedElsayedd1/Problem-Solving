// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n1, n2;
    long long int r = 0;
    char x;
    cin >> n1 >> x >> n2;
    switch(x){
        case '+' :
            r = n1 + n2;
            break;
        case '-' :
            r = n1 - n2;
            break;
        case '*' :
            r = n1 * n2;
            break;
        case '/' :
            r = n1 / n2;
            break;
        
    }
    cout << r;
    return 0;
}