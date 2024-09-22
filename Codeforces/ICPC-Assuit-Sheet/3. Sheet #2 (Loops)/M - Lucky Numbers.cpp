// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int n1, n2;
    unsigned int flag = 0;
    cin >> n1 >> n2;
    int k ;
    
    for(int i = n1; i <= n2; i++){
        k = i;
        while(k != 0){
            if(k % 10 == 4 || k % 10 == 7){
                k /= 10;
            }
            else{
                break;
            }
        }
        if(k == 0){
            cout << i << " ";
            flag = 1;
        }
    }
    if(flag == 0){
        cout << -1;
    }
    
    
    return 0;
}