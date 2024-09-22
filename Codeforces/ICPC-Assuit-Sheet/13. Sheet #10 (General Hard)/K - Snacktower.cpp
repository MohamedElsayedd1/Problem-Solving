// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int size;
    cin >> size;
    int max = size;
    int Freq[size+1] = {0}; // intialize all array elements to 0
    for(int i = 0; i < size; i++){
        int n;
        cin >> n;
        Freq[n] = 1;
        while(Freq[max]){
            cout << max << " ";
            max--;
        }
        cout << endl;
    }

    return 0;
}