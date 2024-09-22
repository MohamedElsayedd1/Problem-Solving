// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

int main() {
    // Write C++ code here
    string s;
    cin >> s;
    int s_count = 0;
    int remove_count = 0;
    int repeat_count = 0;
    string output;
    int count ;
    cin >> count;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '*' && s[i] != '?'){ 
            s_count++;
            output += s[i];
        }
    }
    
    
    if(s_count > count){
        remove_count = s_count - count;
        int deleted = 0;
        output.clear();
        s_count = 0;
        for(int i = 0; i < s.size(); i++){
            if(deleted == remove_count){
                break;
            }
            if(s[i+1] == '?' || s[i+1] == '*'){
                deleted++;
                s.erase(i, 1);
            }
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '?' && s[i] != '*'){
                output += s[i];
                s_count++;
            }
        }
        
        if(s_count == count){
            cout << output;
        }
        else{
            cout << "Impossible";
        }
        
    }
    else if(s_count < count){
        repeat_count = count - s_count;
        bool repeated = false;
        output.clear();
        s_count = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] != '?' && s[i] != '*'){
                output += s[i];
                s_count++;
            }
            if(s[i] == '*' && !repeated){
                for(int j = 0; j < repeat_count; j++) {
                    output += s[i-1];
                    s_count++;
                }
                repeated = true;
            }
        }
        
        if(s_count == count){
            cout << output;
        }
        else{
            cout << "Impossible";
        }
        
    }
    else{
        cout << output << endl;
        return 0;
    }
    
    return 0;
}

// Solution 2 :

// #include<iostream>
// using namespace std;

// int main() {
//     string password;
//     int targetLength;
//     cin >> password >> targetLength;
    
//     int actualLength = 0;
//     int questionMarkCount = 0;
//     int asteriskCount = 0;
    
//     // Step 1: Count the non-special characters and the number of special characters
//     for(int i = 0; i < password.size(); i++) {
//         if(password[i] != '?' && password[i] != '*') {
//             actualLength++;
//         } else if(password[i] == '?') {
//             questionMarkCount++;
//         } else if(password[i] == '*') {
//             asteriskCount++;
//         }
//     }
    
//     // Step 2: Handle the case where the current length matches the target length
//     if(actualLength == targetLength) {
//         for(int i = 0; i < password.size(); i++) {
//             if(password[i] != '?' && password[i] != '*') {
//                 cout << password[i];
//             }
//         }
//     } 
//     // Step 3: Handle the case where the current length is greater than the target length
//     else if(actualLength > targetLength) {
//         int toRemove = actualLength - targetLength;
        
//         if(questionMarkCount + asteriskCount >= toRemove) {
//             int removed = 0;
//             for(int i = 0; i < password.size(); i++) {
//                 if(password[i] != '?' && password[i] != '*') {
//                     if((password[i + 1] == '?' || password[i + 1] == '*') && removed < toRemove) {
//                         removed++;
//                         continue; // Skip this character
//                     }
//                     cout << password[i];
//                 }
//             }
//         } else {
//             cout << "Impossible";
//         }
//     } 
//     // Step 4: Handle the case where the current length is less than the target length
//     else if(actualLength < targetLength) {
//         int toAdd = targetLength - actualLength;
//         bool added = false;
//         if(asteriskCount > 0) {
//             for(int i = 0; i < password.size(); i++) {
//                 if(password[i] != '?' && password[i] != '*') {
//                     cout << password[i];
//                     if(password[i + 1] == '*' && !added) {
//                         for(int j = 0; j < toAdd; j++) {
//                             cout << password[i];
//                         }
//                         added = true;
//                     }
//                 }
//             }
//         } else {
//             cout << "Impossible";
//         }
//     }
    
//     return 0;
// }