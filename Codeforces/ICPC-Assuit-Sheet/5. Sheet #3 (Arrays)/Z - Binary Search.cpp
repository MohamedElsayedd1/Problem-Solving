#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    unsigned long long int t;
    cin >> t;
    
    unsigned long long int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    
        
    
    while(t--){
        unsigned long long int key;
        cin >> key;
        bool flag = false;
        int left = 0;
        int right = n - 1;
        while(left <= right){
            unsigned long long int mid = left + (right - left)/2;
            if(arr[mid] == key){
                cout << "found" << endl;
                flag = true;
                break;
            }
            else if(arr[mid] > key){
                right = mid -1;
            }
            else{
                left = mid + 1;
            }
        }
        if(!flag){
            cout << "not found" << endl;
        }
    }
    
    return 0;
}