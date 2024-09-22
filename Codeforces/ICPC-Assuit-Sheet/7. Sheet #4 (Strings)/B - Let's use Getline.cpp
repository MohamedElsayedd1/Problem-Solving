#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string n;
    getline(cin, n);
    
    int index = n.find("\\");
    if(index != string::npos){
        cout << n.substr(0, index);
    }
    
    return 0;
}

// Another solution 


// int main() {
//     string n;
//     getline(cin, n);
    
//     for(char x : n){
//         if(x == '\\'){
//             break;
//         }
//         cout << x;
//     }
    
//     return 0;
// }