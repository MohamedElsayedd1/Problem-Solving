// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int x;
    cin >> x;
    while(x / 10!= 0){
        x = x / 10;
    }
    if(x % 2 == 0){
        cout << "EVEN";
    }
    else{
        cout << "ODD";
    }
    
    return 0;
}