#include <iostream>
using namespace std;

void CountDistinct(void){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    int counter = 0;
    
    for(int i = 0; i < size; i++){
        counter++;
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                counter--;
                break;
            }
        }
    }
    cout << counter;
}

int main() {
    CountDistinct();

    return 0;
}