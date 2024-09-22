#include <iostream>
#include <limits.h>
#include <ctype.h> 
using namespace std; 



int main() {
    unsigned int n;
    cin >> n;
    
    unsigned int count = 0;
    
    unsigned long long int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    bool flag = false;
        
    while(1){
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 != 0){
                flag = true;
                break;
            }
            else{
                arr[i] /= 2;
            }
        }
        if(flag){
            break;
        }
        count++;
    }
    
    
    cout << count;
    

    return 0;
}