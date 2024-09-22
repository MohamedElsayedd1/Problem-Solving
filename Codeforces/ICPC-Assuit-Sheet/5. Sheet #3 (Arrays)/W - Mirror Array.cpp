#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    
    unsigned long long int arr[n][m];
    
    // Read the mirrored 2D array from input
    for(int i = 0; i < n; i++){
        for(int j = m-1; j >= 0; j--){
            cin >> arr[i][j];
        }
    }
    
    // Output the mirrored 2D array
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
