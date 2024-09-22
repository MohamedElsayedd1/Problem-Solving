
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        string s1;
        cin >> s1;
        
        string s2;
        cin >> s2;
        
        string str;
        
        int max_s = max(s1.size(), s2.size());
        
        for(int i = 0; i < max_s; i++){
            if(i < s1.size()){
                str += s1[i];
            }
            if(i < s2.size()){
                str += s2[i];
            }
        }
        
        cout << str << endl;
        
    }
    
    return 0;
}