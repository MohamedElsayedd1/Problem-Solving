#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int min_index = 0;
    unsigned long int n ;
    cin >> n;
    signed long long int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    signed long long int min = arr[0]; 
    int i = 0;
    for(i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }
    cout << min << " " << min_index+1;


    return 0;
}