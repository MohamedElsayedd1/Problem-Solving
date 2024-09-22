#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
     
    
    while(t--){
        int n;
        cin >> n;
        signed long long int arr[n];
        
        signed long long int max = INT_MIN;
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                max = INT_MIN;
                for(int k = i; k <= j; k++){
                    if(arr[k] > max){
                        max = arr[k];
                    }
                }
                cout << max << " ";
            }
        }
        cout << endl;
    }
    
    
    
    
    return 0;
}
