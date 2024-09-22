// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    char x;
    cin >> x;
    
    if(isalpha(x) && islower(x)){
        x = toupper(x);
        cout << x;
        
    }
    else if(isalpha(x) && isupper(x)){
        x = tolower(x);
        cout << x;
    }
    return 0;
}
