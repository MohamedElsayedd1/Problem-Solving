#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    int myarr1[n];
    int myarr2[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0){
            if(arr[i] < 0){
                myarr1[i] = arr[i];
                myarr2[i] = arr[i] * -1 ;
            }
            else{
                myarr1[i] = arr[i] * -1;   
                myarr2[i] = arr[i];
            }
        }
        else{
            if(arr[i] < 0){
                myarr2[i] = arr[i];
                myarr1[i] = arr[i] * -1 ;
            }
            else{
                myarr2[i] = arr[i] * -1;
                myarr1[i] = arr[i];
            }
        }
    }

    // myarr1 -> -1 2 -3 4 -5
    // myarr2 -> 1 -2 3 -4 5

    // Output the results for verification
    int count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != myarr1[i]){
            count1++;
        }
        if(arr[i] != myarr2[i]){
            count2++;
        }
    }
    
    if(count1 <= count2){
        cout << count1;
    }
    else{
        cout << count2;
    }

    return 0;
}

