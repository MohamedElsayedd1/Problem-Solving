#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int arr[m];
    int res[n];
    
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
    }
    
    int t = 0;
    
    int smallest = INT_MAX;
    
    for(int i = 0; i <= m-n; i++){
        int minVal = arr[i];
        int maxVal = arr[i+n-1];
        int current_smallest = maxVal - minVal;
        if(current_smallest < smallest){
            smallest = current_smallest;
        }
    }
    
    cout << smallest;

    return 0;
}
