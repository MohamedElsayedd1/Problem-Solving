#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long int arr1[n];
    unsigned long long int arr2[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < n; j++){
            if(arr1[i] == arr2[j]){
                arr2[j] = -1;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "no";
            return 0;
        }
    }
    
    cout << "yes";
    
    

    return 0;
}