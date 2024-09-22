// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    cout << endl;
}



void ShiftRight(int arr[], int size, int n){
    while(n--){
        int temp1 = arr[0];
        arr[0] = arr[size-1];
        for(int i = 1; i < size; i++){
            int temp2 = arr[i];
            arr[i] = temp1;
            temp1 = temp2;
        }
    }
}



int main() {
    int size, x;
    cin >> size >> x;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    ShiftRight(arr, size, x);
    printArray(arr, size);

    return 0;
}