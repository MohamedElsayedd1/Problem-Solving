// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;

    string pass;
    
    for(int i = 0; i < n; i++){
        pass += 'a' + (i % k); 
    }
    
    cout << pass;


    return 0;
}