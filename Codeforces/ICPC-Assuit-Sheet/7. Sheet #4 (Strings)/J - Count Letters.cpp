
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string n;
    cin >> n;

    int count[26] = {0};

    for (size_t i = 0; i < n.size(); i++)
    {
        count[n[i] - 'a']++;
    }

    for (size_t i = 0; i < 26; i++)
    {
        if (count[i] >= 1)
        {
            cout << (char)(i + 'a') << " : " << count[i] << endl;
        }
    }

    return 0;
}