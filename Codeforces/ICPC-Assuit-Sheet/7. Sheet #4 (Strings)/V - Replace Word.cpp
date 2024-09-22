#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{

    string s;
    getline(cin, s);

    while (s.find("EGYPT") != string::npos)
    {
        int index = s.find("EGYPT");
        // s.replace(index,5, " ");
        s.erase(index, 4);
        s[index] = ' ';
    }
    cout << s;

    return 0;
}