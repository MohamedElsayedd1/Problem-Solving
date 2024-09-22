#include <iostream>
#include <cmath>
#include <climits>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    
    int arr1[n];
    int arr2[m] = {0};
    
    
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
        arr2[arr1[i]-1]++;
    }
    
    
    for(int i = 0; i < m; i++){
        cout << arr2[i] << endl;
    }

    return 0;
}