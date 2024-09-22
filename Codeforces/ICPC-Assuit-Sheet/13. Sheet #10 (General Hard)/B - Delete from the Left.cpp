#include <bits/stdc++.h>
using namespace std;


int main() {
    string s, t;
    cin >> s >> t;
    
    int n1 = s.size();
    int n2 = t.size();
    
    int counter = 0;
    
    stack<char> s1;
    stack<char> s2;
    
    for(int i = 0; i < n1; i++){
        s1.push(s[i]);
    }
    
    for(int i = 0; i < n2; i++){
        s2.push(t[i]);
    }
    
    int smallest = (n1 < n2) ? n1 : n2;
    
    for(int i = 0; i < smallest; i++){
        if(s1.top() != s2.top()){
            break;
        }
        counter+=2;
        s1.pop();
        s2.pop();
    }
    
    cout << n1 + n2 - counter;
    
    return 0;
}


