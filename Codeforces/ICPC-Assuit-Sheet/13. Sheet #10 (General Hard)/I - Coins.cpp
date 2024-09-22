#include <iostream>
using namespace std;

int main() {
    string s;
    int A = 0, B = 0, C = 0;
    
    for(int i = 0; i < 3; i++) {
        cin >> s;
        if(s[1] == '>') {
            if(s[0] == 'A') A++;
            else if(s[0] == 'B') B++;
            else if(s[0] == 'C') C++;
        } else if(s[1] == '<') {
            if(s[2] == 'A') A++;
            else if(s[2] == 'B') B++;
            else if(s[2] == 'C') C++;
        }
    }
    
    if(A == 2 && B == 1 && C == 0) cout << "CBA";
    else if(A == 2 && C == 1 && B == 0) cout << "BCA";
    else if(B == 2 && A == 1 && C == 0) cout << "CAB";
    else if(B == 2 && C == 1 && A == 0) cout << "ACB";
    else if(C == 2 && A == 1 && B == 0) cout << "BAC";
    else if(C == 2 && B == 1 && A == 0) cout << "ABC";
    else cout << "Impossible";
    
    return 0;
}
