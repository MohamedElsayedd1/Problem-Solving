// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int count = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] == arr[i]){
                count++;
                break;
            }
        }
    }
    
    if(count){
        cout << count;
    }
    else{
        cout << -1;
    }

    return 0;
}