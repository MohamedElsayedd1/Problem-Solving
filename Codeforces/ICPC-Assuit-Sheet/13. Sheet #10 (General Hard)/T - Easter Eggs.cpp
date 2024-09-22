// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;


int main() {
    int n;
    cin >> n;
    char arr[7] = {'R','O','Y','G','B','I','V'};
    string s; 
    int counter = 0;
    
    bool marked = false;
    
    for (int i = 0; i < 7; i++) {
        s += arr[i];
    }
    
    for(int i = 7; i < n; i++){
        s += arr[(i - 7) % 4 + 3];
    }
    
    cout << s;
    
    return 0;
}