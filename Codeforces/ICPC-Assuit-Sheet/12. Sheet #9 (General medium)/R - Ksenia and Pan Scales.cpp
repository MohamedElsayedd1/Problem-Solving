// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Write C++ code here
    string s;
    cin >> s;
    
    string x;
    cin >> x;
    
    
    int cross = s.find('|');
    string left = s.substr(0, cross);
    string right = s.substr(cross+1);
    
    
    for(int i = 0; i < x.size(); i++){
        if(right.size() <= left.size()){
            right+= x[i];
        }
        else if(left.size() <= right.size()){
            left += x[i];
        }
    }
    
    if(right.size() != left.size()){
        cout << "Impossible";
    }
    else{
        cout << left << "|" << right << endl;
    }

    return 0;
}