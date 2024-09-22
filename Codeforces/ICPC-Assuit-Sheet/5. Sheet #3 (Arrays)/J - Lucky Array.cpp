#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int n ;
    int count = 0;
    cin >> n;
    signed long long int arr[n];
    signed long long int min = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            count++;
        }
    }
    
    if(count % 2 != 0){
        cout << "Lucky";
    }
    else{
        cout << "Unlucky";
    }
    return 0;
}