// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int count = 0;
    unsigned int k;
    unsigned int s;
    unsigned int l;
    cin >> k >> s;
    for(int i = 0; i <= k; i++){
        for(int j = 0; j <= k; j ++){
            l = s - i - j;
            if(l <= k && l >= 0){
                count ++;
            }
        }
    }
    cout << count << endl;

    return 0;
}