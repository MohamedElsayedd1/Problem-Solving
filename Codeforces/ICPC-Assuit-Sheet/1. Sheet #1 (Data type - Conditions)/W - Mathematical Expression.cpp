// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n1, n2;
    char x;
    char y = '=';
    int r;
    cin >> n1 >> x >> n2 >> y >> r;
    if(x == '+'){
        if(n1 + n2 == r){
            cout << "Yes";
        }
        else{
            cout << n1 + n2;
        }
    }
    else if(x == '-'){
        if(n1 - n2 == r){
            cout << "Yes";
        }
        else{
            cout << n1 - n2;
        }
    }
    else if(x == '*'){
        if(n1 * n2 == r){
            cout << "Yes";
        }
        else{
            cout << n1 * n2;
        }
    }
    return 0;
}