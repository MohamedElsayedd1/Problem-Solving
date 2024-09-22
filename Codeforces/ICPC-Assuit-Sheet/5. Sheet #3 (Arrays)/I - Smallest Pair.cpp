#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        signed long long int arr[n];
        signed long long int min = INT_MAX;
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        for(int i = 0; i < n; i ++){
            for(int j = i+1; j < n; j++){
                signed long long int sum = arr[i] + arr[j] + j - i;
                if(sum < min){
                    min = sum;
                }
            }
        }
        
        cout << min << endl;
    }
    

    return 0;
}
