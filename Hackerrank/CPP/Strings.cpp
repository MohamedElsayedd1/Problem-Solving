#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string s1, s2;
    string s3;
    char temp;
    string s4;
    cin >> s1;
    cin >> s2;
    cout << s1.size() << " " << s2.size() << endl; 
    s3 = s1 + s2;
    cout << s3 << endl;
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    s4 = s1 + " " + s2;
    cout << s4 << endl;
    return 0;
}
