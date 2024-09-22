// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    signed int n1;
    signed int n2;
    signed int min;
    signed int max;
    unsigned sum = 0;
    while(1){
        sum = 0;
        cin >> n1 >> n2;
        if(n1 < n2){
            min = n1;
            max = n2;
        }
        else{
            min = n2;
            max = n1;
        }
        if(n1<= 0 || n2 <= 0){
            break;
        }
        else{
            for(int i = min; i <= max; i++){
                sum +=i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
        }
    }
    
    
    
    return 0;
}