#include <iostream>
#include <string>

using namespace std;

int main() {
    int rooms;
    cin >> rooms;
    
    int count = 0;
    
    while(rooms--){
        int p, q;
        cin >> p >> q;
        if(q - p >= 2){
            count++;
        }
    }
    
    cout << count;
    
    
    
    return 0;
}
