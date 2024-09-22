// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int n1, n2;
    int min = 0;
    int max = 0;
    cin >> n1 >> n2;
    if(n1 <= n2)
        min = n1;
    else
        min = n2;
    for(int i = 1; i <= min; i++){
        if(n1 % i == 0 && n2 % i == 0){
            max = i;
        }
    }
    cout << max;

    
    return 0;
}