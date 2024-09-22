#include <iostream>
#include <string>
using namespace std;

int main() {
    string n1,n2;
    cin >> n1 >> n2;
    
    cout << n1.size() << " " << n2.size() << endl;
    
    cout << n1+n2 << endl;
    
    char temp = n1[0];
    n1[0] = n2[0];
    n2[0] = temp;
    
    cout << n1 + " " + n2 ;
    
    return 0;
}
