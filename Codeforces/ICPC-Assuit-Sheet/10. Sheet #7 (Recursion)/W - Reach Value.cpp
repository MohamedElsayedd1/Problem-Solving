
#include <iostream>
using namespace std;

bool CanReachValue(long long n, long long current_val = 1){
    if(current_val == n){
        return true;
    }
    else if(current_val > n){
        return false;
    }
    
    bool ten = CanReachValue(n, current_val*10);
    bool twenty = CanReachValue(n, current_val*20);
    
    return ten || twenty;
}

int main() {
    // Write C code here
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(CanReachValue(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    

    return 0;
}