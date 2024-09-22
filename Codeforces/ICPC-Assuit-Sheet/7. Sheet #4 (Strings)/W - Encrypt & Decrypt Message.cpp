#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    if(n == 1){
        for(int i = 0; i < s.size(); i++){
            int index = original.find(s[i]);
            if(index != string::npos){
                s[i] = key[index];
            }
        }
    }
    else{
        for(int i = 0; i < s.size(); i++){
            int index = key.find(s[i]);
            if(index != string::npos){
                s[i] = original[index];
            }
        }
    }

    cout << s;


    return 0;
}
