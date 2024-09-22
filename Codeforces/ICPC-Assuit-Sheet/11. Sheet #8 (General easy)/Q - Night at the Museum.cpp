#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    string s;
    cin >> s;
    int pointer = 'a';
    int rotations = 0;
    for(char ch : s){
        if(abs(ch - pointer) < abs(ch - pointer - 26) && abs(ch - pointer) < abs(ch - pointer + 26)){
            rotations += abs(ch - pointer);
            pointer = ch;
        }
        else if(abs(ch - pointer - 26) < abs(ch - pointer + 26)){
            rotations += abs(ch - pointer - 26);
            pointer = ch;
        }
        else if(abs(ch - pointer + 26) < abs(ch - pointer - 26)){
            rotations += abs(ch - pointer + 26);
            pointer = ch;
        }
    }
    cout << rotations;
    return 0;
}