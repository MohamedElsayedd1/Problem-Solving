// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    char s;
    unsigned int n;
    cin >> s;
    cin >> n;
    unsigned int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << s;
        }
        cout << endl;
    }
    
    
    return 0;
}