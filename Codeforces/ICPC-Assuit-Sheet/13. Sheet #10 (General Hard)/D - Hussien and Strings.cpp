#include <bits/stdc++.h>
using namespace std;


int main() {
    string s, t;
    cin >> s >> t;
    
    int counter = 0;
    
    if(s.size() != t.size()){
        cout << "NO\n";
        return 0;
    }
    
    if(s == t){
        sort(s.begin(), s.end());
        bool isSwap = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == s[i+1]){
                isSwap = true;
            }
        }
        if(isSwap){
            cout << "YES";
        }
        else{
            cout<< "NO";
        }
        return 0;
    }
    
    vector<int> mismatch;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] != t[i]){
            mismatch.push_back(i);
            if(mismatch.size() > 2){
                cout << "NO\n";
                return 0;
            }
        }
    }
    
    if(mismatch.size() == 2){
        swap(s[mismatch[0]], s[mismatch[1]]);
        if(s == t){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
