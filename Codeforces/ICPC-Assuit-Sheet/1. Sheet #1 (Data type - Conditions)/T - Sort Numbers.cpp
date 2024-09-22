// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    signed long long int arr_max[3], arr[3];
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
        arr_max[i] = arr[i];
    }
    signed long long int temp;
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(arr_max[j] < arr_max[i]){
                temp = arr_max[i];
                arr_max[i] = arr_max[j];
                arr_max[j] = temp;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        cout << arr_max[i] << endl;;
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << endl;;
    }
    
    
    return 0;
}