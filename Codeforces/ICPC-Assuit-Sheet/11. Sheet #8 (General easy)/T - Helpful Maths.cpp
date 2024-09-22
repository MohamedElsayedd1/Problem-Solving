
#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;


int main() {
    string s;
    cin >>s;
    
    for(int i = 0; i < s.size(); i+=2){
        for(int j = i+2; j < s.size(); j+=2){
            if(s[j] < s[i]){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    
    cout << s;
    return 0;
}