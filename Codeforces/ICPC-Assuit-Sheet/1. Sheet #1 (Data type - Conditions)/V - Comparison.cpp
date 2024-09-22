// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n1, n2;
    char x;
    cin >> n1 >> x >> n2;
    if(x == '='){
        if(n1 == n2){
            cout << "Right";
        }
        else{
            cout << "Wrong";
        }
    }
    else if(x == '>'){
        if(n1 > n2){
            cout << "Right";
        }
        else{
            cout << "Wrong";
        }
    }
    if(x == '<'){
        if(n1 < n2){
            cout << "Right";
        }
        else{
            cout << "Wrong";
        }
    }
    
    return 0;
}