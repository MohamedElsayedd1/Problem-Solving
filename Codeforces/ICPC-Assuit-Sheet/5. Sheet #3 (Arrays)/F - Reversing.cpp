#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int min_index = 0;
    unsigned long int n ;
    cin >> n;
    unsigned long long int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    unsigned long long int *left = &arr[0];
    unsigned long long int *right = &arr[n-1];
    
    while(left < right){
        unsigned long long int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}