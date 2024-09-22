#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;  // Read the input string
    
    int left = 0;
    int right = str.size() - 1;
    
    while (left < right) {
        if (str[left] == '?') {
            str[left] = str[right];  
        } else if (str[right] == '?') {
            str[right] = str[left]; 
        } else if (str[right] != str[left]) {
            cout << -1;  
            return 0;
        }
        left++;
        right--;
    }
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '?') {
            str[i] = 'a';
        }
    }
    
    cout << str;
    return 0;
}