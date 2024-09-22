#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;


double avg(float arr[], int n){
    if(n == 0)
        return 0;
    double sum = 0;
    double avg;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    avg = sum / n;
    return avg;
}


int main() {
    // Write C++ code here
    cout << fixed << setprecision(7);
    int size;
    cin >> size;
    float arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << avg(arr, size);

    return 0;
}