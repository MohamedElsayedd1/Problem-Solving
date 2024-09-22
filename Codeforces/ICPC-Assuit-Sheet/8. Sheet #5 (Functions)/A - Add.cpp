#include <iostream>
using namespace std;

long int sum(int a, int b){
    return a+b;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    cout << sum(n1, n2);

    return 0;
}