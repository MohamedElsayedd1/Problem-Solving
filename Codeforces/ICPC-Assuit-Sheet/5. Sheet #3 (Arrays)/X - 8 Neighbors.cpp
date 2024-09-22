#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    
    char arr[n+2][m+2];
    
    // Read the mirrored 2D array from input
    for(int i = 0; i < n+2; i++){
        for(int j = 0; j < m+2; j++){
            arr[i][j] = 'x';
        }
    }
    
    
    // Output the mirrored 2D array
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            cin >> arr[i][j];
        }
    }
    
    int x;
    int y;
    cin >> x >> y;
    
    if(arr[x+1][y-1] == '.' || arr[x+1][y] == '.' || arr[x+1][y+1] == '.'
       || arr[x][y-1] == '.' || arr[x-1][y-1] == '.' || arr[x-1][y] == '.' 
       || arr[x-1][y+1] == '.' || arr[x][y+1] == '.'){
           cout << "no";
           return 0;
       }
    cout << "yes";
    
    
    return 0;
}