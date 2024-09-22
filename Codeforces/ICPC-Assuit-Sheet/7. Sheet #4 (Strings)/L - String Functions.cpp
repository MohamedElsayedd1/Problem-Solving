#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    string str;
    cin >> str;

    while (q--)
    {
        string s;
        cin >> s;

        if (s == "substr")
        {
            int start, end;
            cin >> start >> end;
            int l = min(start, end) - 1;
            int r = max(start, end);
            cout << str.substr(l, r - l) << endl;
        }
        else if (s == "sort")
        {
            int start, end;
            cin >> start >> end;
            int l = min(start, end) - 1;
            int r = max(start, end);
            sort(str.begin() + l, str.begin() + r);
        }
        else if (s == "reverse")
        {
            int start, end;
            cin >> start >> end;
            int l = min(start, end) - 1;
            int r = max(start, end);
            reverse(str.begin() + l, str.begin() + r);
        }
        else if (s == "pop_back")
        {
            if (!str.empty())
            {
                str.pop_back();
            }
        }
        else if (s == "push_back")
        {
            char ch;
            cin >> ch;
            str.push_back(ch);
        }
        else if (s == "front")
        {
            if (!str.empty())
            {
                cout << str.front() << endl;
            }
        }
        else if (s == "back")
        {
            if (!str.empty())
            {
                cout << str.back() << endl;
            }
        }
        else if (s == "print")
        {
            int index;
            cin >> index;
            if (index >= 1 && index <= str.size())
            {
                cout << str[index - 1] << endl;
            }
        }
    }

    return 0;
}
