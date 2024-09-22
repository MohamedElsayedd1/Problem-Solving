// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    double sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += log10(arr[i]);
    }
    
    long long x;
    x = pow(10, sum / n);
    cout << x+1 << endl;

    return 0;
}