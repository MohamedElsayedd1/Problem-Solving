#include <iostream>
#include <limits.h>
using namespace std; 


int main() {
    unsigned int n;
    cin >> n;
    signed long long int arr[n];
    signed long long int min = 0;
    signed long long int max = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > arr[max]){
            max = i;
        }
        if(arr[i] < arr[min]){
            min = i;
        }
    }
    signed long long int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;
    
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}