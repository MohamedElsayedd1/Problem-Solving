// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    char x;
    cin >> x;
    
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
        cout << "ALPHA\n";
        if((x >= 'a' && x <= 'z') ){
            cout << "IS SMALL\n";
        }
        else{
            cout << "IS CAPITAL\n";
        }
    }
    else if(x >= '0' && x <= '9'){
        cout << "IS DIGIT\n";
    }
    return 0;
}