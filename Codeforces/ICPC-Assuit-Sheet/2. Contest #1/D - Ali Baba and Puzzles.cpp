// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    signed long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a + b - c == d){
        cout << "YES";
    }
    else if(a - b + c == d){
        cout << "YES";
    }
    else if(a + b * c == d){
        cout << "YES";
    }
    else if(a * b + c == d){
        cout << "YES";
    }
    else if(a - b * c == d){
        cout << "YES";
    }
    else if(a * b - c == d){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}