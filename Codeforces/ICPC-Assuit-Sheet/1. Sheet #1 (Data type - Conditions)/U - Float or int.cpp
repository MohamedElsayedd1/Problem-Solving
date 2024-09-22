// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    float x;
    float val;
    cin >> x;
    if(x > (int)x){
        val = x - (int)x;
        cout << "float " << (int)x << " " << val;;
    }
    else{
        cout << "int " << (int)x;
    }
    
    return 0;
}