// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    
    for(int i = 0; i < n-2; i++){
        if(arr[i] + arr[i+1] > arr[i+2]){
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    

    return 0;
}