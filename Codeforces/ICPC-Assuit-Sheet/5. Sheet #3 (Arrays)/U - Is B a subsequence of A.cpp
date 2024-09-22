#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    

    
    unsigned long long int arr1[n1];
    unsigned long long int arr2[n2];
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    
    
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
    
    
    int index = -1;
    
    for(int i = 0; i < n2; i++){
        bool flag = true;
        for(int j = 0; j < n1; j++){
            if(arr2[i] == arr1[j]){
                arr1[j] = -1;
                if(j > index){
                    flag = true;
                    index = j;
                    break;
                }
                else{
                    flag = false;
                    break;
                }
            }
            else{
                flag = false;
            }
        }
        if(!flag){
            cout << "NO";
            return 0;
        }
    }
    
    cout << "YES";
    

    return 0;
}