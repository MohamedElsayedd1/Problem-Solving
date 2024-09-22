// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int decimal = 0;
    unsigned int counts;
    cin >> counts;
    while(counts != 0){
        unsigned int n;
        cin >> n;
        int one = 0;
        for(int i = 0; i < 32; i++){
            if(n&(1 << i)){
                one++;
            }
        }
        for(int i = 0; i < one; i++){
            decimal += pow(2, i);
        }
        cout << decimal  << endl;
        decimal = 0;
        counts--;
    }

    return 0;
}