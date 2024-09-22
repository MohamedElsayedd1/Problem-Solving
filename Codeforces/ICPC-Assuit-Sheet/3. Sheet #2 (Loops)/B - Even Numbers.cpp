// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
    unsigned int n;
    int counter = 0;
    cin >> n;
    
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            counter ++;
            cout << i << endl;
        }
    }
    if(counter == 0){
        cout << -1;
    }
    

    return 0;
}