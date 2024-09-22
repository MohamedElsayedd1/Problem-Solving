#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n{}, q{};
    long long int i, j;
    cin >> n;
    cin >> q;
    long long int **arr = (long long int **)malloc(n*sizeof(long long int));
    long long int count = n;

    // Read input and allocate memory for each row based on its size
    for (long long int i = 0; i < n; ++i) {
        long long int size;
        cin >> size;

        // Allocate memory for the current row
        arr[i] = (long long int *)malloc(size * sizeof(long long int));
        if (arr[i] == nullptr) {
            cerr << "Memory allocation failed." << endl;
            return 1;
        }

        // Read elements into the current row
        for (long long int j = 0; j < size; ++j) {
            cin >> arr[i][j];
        }
    }
    for(long long int k = 0; k < n; k++){
        cin >> i;
        cin >> j;
        cout << arr[i][j] << endl;
    }
    
    
    return 0;
}
