#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    char last_char = s[0];
    int max_size = 1;

    for (size_t i = 1; i < n; i++)
    {
        if (s[i] != last_char)
        {
            max_size++;
            last_char = s[i];
        }
    }

    cout << max_size;

    return 0;
}