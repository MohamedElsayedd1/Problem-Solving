// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int n;
    cin >> n;
    unsigned long long int num = 0;
    unsigned long long int x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x > num){
            num = x;
        }
    }
    cout << num;
    return 0;
}