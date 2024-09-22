 
#include <iostream>
using namespace std;
int main()
{
    unsigned int n, k;
    cin >> n >> k;
    
    signed long long int arr[n];
    signed long long int sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                signed long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < k; i++){
        if(arr[i] < 0){
            continue;
        }
        sum+=arr[i];
    }
    
    cout << sum << endl;
 
    return 0;
}

// Another solution

// int main()
// {
//     unsigned int n, k;
//     cin >> n >> k;
    
//     signed long long int arr[n];
//     signed long long int sum = 0;
    
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             if(arr[j] > arr[i]){
//                 signed long long int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
    
//     for(int i = 0; i < k; i++){
//         if(arr[i] < 0){
//             continue;
//         }
//         sum+=arr[i];
//     }
    
//     cout << sum << endl;
 
//     return 0;
// }