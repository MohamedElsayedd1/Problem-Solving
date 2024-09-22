#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long int n ;
    cin >> n;
    unsigned long long int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    unsigned long long int x;
    cin >> x;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cout << i;
            return 0;
        }
    }

    // Iterate over possible values of i and j
    cout << "-1";

    return 0;
}