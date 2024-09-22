
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long int n1, n2;
    cin >> n1 >> n2;
    
    unsigned long int min_ = n1 < n2 ? n1 : n2;
    unsigned long int max_ = n1 > n2 ? n1 : n2;
    
    
    unsigned long long int sum = 0;
    unsigned long long int odd = 0;
    unsigned long long int even = 0;
    
    for(int i = min_; i <= max_; i++ ){
        sum += i;
        if(i % 2 == 0){
            even += i;
        }
        if(i % 2 != 0){
            odd += i;
        }
    }
    
    cout << sum << endl;
    cout << even << endl;
    cout << odd << endl;
    

    return 0;
}