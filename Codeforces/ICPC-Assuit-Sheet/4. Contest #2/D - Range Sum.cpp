// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    unsigned long long int n;
    unsigned long long int num1, num2;
    unsigned long long int temp;
    unsigned long long int sum = 0;
    cin >> n;
    cin >> num1 >> num2;
    while(n!= 0){
        if(num1  > num2){
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        unsigned long long int count = num2 - num1 + 1;
        sum = count * (num1 + num2) / 2;
        cout << sum << endl;
        sum = 0;
        n--;
        cin >> num1 >> num2;
    }
    return 0;
}