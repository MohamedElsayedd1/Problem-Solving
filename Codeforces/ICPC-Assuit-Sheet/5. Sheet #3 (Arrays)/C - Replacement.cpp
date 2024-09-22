#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long int n ;
    cin >> n;
    signed long long int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            arr[i] = 2;
        }
        else if(arr[i] > 0){
            arr[i] = 1;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
