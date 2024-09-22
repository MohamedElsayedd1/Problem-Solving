// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while(n--){
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        
        int count = 0;
        for(auto ch : s2){
            if(s1[count] == ch && count < s1.size()){
                count++;
            }
        }
        
        if(count != s1.size()){
            cout << "NO\n";
            continue;
        }
        
        int countS1[26] = {0};
        int countS2[26] = {0}; 
        int countS3[26] = {0}; 

    
        for (char c : s1) 
            countS1[c - 'a']++;
        for (char c : s2) 
            countS2[c - 'a']++;
        for (char c : s3) 
            countS3[c - 'a']++;
        
        bool canForm = true;
        
        for(int i = 0; i < 26; i++){
            if(countS1[i] + countS3[i] < countS2[i]){
                canForm = false;
            }
        }
        
        if(canForm){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}