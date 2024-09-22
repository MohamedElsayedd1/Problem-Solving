
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    
    int arr[n];
    int numbers[1000] = {0};
    bool isSwap = true;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        numbers[arr[i]-1]++;
    }
    
    if(n == 1){
        isSwap = true;
    }
    else{
        for(int i = 0; i < 1000; i++){
            if(numbers[i] > (n+1)/2){
                isSwap = false;
                break;
            }
        }
    }
    
    if(isSwap){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}