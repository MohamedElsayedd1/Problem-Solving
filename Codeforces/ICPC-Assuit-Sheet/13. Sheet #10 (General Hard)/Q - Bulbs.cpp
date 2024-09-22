#include <iostream>
#include <climits>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int blue = 0;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int max_ = INT_MIN;
    for(int i = 0; i < n; i++){
        max_ = max(max_, arr[i]);
        if(i+1 == max_){
            blue++;
        }
    }
    
    cout << blue << endl;

    return 0;
}