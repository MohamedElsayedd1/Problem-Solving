#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    
    if (!isPalindrome(s)) {
        cout << s.size();
    } else {
        bool isAllSame = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                isAllSame = false;
                break;
            }
        }
        
        if (isAllSame) {
            cout << 0;
        } else {
            cout << s.size() - 1;
        }
    }
    
    return 0;
}
