#include <iostream>
#include <string>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    
    int arr1[n1], arr2[n2];
    
    long long sum1 = 0, sum2 = 0;
    
    for(int i = 0; i < n1 ;i++){
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    for(int i = 0; i < n2 ;i++){
        cin >> arr2[i];
        sum2 += arr2[i];
    }

    if(sum1 == sum2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}
