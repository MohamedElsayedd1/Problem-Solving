// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    unsigned int n;
    unsigned int odd = 0, even = 0, positive = 0, negative = 0;
    cin >> n;
    signed long long num;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        if(num > 0){
            positive++;
        }
        else if(num < 0){
            negative++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    return 0;
}