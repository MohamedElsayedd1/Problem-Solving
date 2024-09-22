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
        if(arr[i] <= 10){
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }


    return 0;
}