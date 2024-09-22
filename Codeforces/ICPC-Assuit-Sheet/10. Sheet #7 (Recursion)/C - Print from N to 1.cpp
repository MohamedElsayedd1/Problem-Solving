
#include <iostream>
#include <cmath>
using namespace std;

void Print(int n){
    if(n == 1){
        cout << "1";
    }
    else{
        cout << n << " ";
        Print(--n); 
    }
}

int main() {
    int n;
    cin >> n;
    
    Print(n);
    
    return 0;
}