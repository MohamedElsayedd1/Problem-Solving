// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int n;
    cin >> n;
    unsigned long long int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    }
    
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            cout << "0\n";
            continue;
        }
        while(arr[i] != 0){
            cout << arr[i]%10 << " ";
            arr[i] /= 10;
        }
        cout << endl;
    }
    
    
    
    
    return 0;
}