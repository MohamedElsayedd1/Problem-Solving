#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int min_index = 0;
    unsigned int n ;
    cin >> n;
    signed int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    
    
    for(int i = 0; i < n; i ++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                signed int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
