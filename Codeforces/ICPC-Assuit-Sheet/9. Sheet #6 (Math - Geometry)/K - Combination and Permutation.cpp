#include <iostream>
using namespace std;

// Function to calculate the sum of integers from 1 to n
long long int GetFactorial(int n){
    if(n <= 0)
        return 1;
    return n * GetFactorial(--n);
}


int main() {
    int n1, n2;
    cin >> n1 >> n2;
    
    
    long long NCR = GetFactorial(n1)/ (GetFactorial(n2)*GetFactorial(n1-n2));
    long long NPR = GetFactorial(n1)/ (GetFactorial(n1-n2));
    
    
    cout << NCR << " " << NPR;
    
    
    return 0;
}