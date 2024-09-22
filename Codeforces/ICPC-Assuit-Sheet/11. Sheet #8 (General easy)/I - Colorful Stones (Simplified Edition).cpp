#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string t;
    
    cin >> s >> t;
    int pos = 0;
    
    for(int i = 0; i < t.size(); i++){
        if(s[pos] == t[i]){
            pos++;
        }
    }
    
    cout << pos+1;
    
    return 0;
}
