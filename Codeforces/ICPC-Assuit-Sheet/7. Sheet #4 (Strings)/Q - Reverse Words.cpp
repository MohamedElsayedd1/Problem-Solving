// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    // Write C++ code here
    string line;
    getline(cin, line);
    
    stringstream ss(line);
    string word;
    int i = 0;
    
    string res; 
    
    while(ss >> word){
        if(word != " "){
            int left = 0;
            int right = word.size()-1;
            while(left < right){
                char temp = word[left];
                word[left] = word[right];
                word[right] = temp;
                left++;
                right--;
            }
            res += word + " ";
        }
    }
    res.erase(res.end()-1);
    cout << res;

    return 0;
}