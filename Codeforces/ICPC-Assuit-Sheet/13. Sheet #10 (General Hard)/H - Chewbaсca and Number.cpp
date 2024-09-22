
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    for(int i = 0; i < n.size(); i++){
        if(i == 0 && n[i] == '9'){
            
        }
        else{
            int digit = n[i] - '0';  
            if(digit > 4){
                digit = 9 - digit;  
                n[i] = digit + '0'; 
            }
        }
    }
    cout << n;
    

    return 0;
}