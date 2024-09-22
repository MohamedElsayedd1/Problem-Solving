// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    // Write C++ code here
    unsigned long long int n, k;
    signed long long int min;
    double counts;
    unsigned int int_counts;
    cin >> n >> k;
    counts = (double)n /k;
    int_counts = (int)counts;
    vector<signed long long int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    for(int i = 0; i < int_counts; i++){
        min = vec[i*k];
        for(int j = i * k; j < (i * k + k); j++){
            if(vec.at(j) < min){
                min = vec.at(j);
            }
        }
        cout << min << " ";
    }
    
    if(counts > (double)int_counts){
        min = vec[int_counts * k];
        for(int i = int_counts * k; i < n; i++){
            if(vec[i] < min){
                min = vec[i];
            }
        }
        cout << min;
    }

    return 0;
}