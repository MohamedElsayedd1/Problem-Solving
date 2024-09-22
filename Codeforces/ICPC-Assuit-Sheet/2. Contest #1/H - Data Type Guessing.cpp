// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
    double n, k, a;
    double res; 
    cin >> n >> k >> a;
    res = (n*k)/a;
    if(res - (signed long long int)res == 0){
        if(res > 2147483647 || res < -2147483647){
            cout << "long long";
        }
        else{
            cout << "int";
        }
    }
    else{
        cout << "double";
    }

    return 0;
}