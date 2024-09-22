
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string n;
    cin >> n;

    int left = 0;
    int right = n.size() - 1;

    while (left <= right)
    {
        if (n[left] != n[right])
        {
            cout << "NO";
            return 0;
        }
        left++;
        right--;
    }
    cout << "YES";

    return 0;
}