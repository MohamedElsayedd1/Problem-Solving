// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    signed int num;
    while(1){
        cin >> num;
        if(num == 1999){
            cout << "Correct"<<endl;
            break;
        }
        else{
            cout << "Wrong"<<endl;
        }
    }
    return 0;
}