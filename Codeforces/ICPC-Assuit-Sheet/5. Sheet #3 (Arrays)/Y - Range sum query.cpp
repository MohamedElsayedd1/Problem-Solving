#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int t;
    cin >> t;
    
    unsigned long long int arr[n];
    unsigned long long int prefix_sum[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i == 0)
            prefix_sum[i] = arr[i];

        else
            prefix_sum[i] = arr[i] + prefix_sum[i-1];
    }
        
    
    while(t--){
        unsigned long long int r,l;
        unsigned long long int sum = 0;
        cin >> r >> l;
        sum = prefix_sum[l-1] - prefix_sum[r-1] + arr[r-1];
        cout << sum << endl;
    }
    
    return 0;
}