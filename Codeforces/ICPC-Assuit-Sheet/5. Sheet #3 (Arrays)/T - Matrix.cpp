#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    signed int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    signed long long int m_sum = 0, s_sum = 0;
    int col = n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                m_sum += arr[i][j];
            }
        }
        s_sum += arr[i][--col];
    }
    
    cout << abs(m_sum-s_sum);
    

    return 0;
}