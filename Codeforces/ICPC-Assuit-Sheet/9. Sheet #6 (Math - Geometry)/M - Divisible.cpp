#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    long long int x;
    cin >> x;

    long long int reminder = 0;

    for (char digit : n)
    {
        reminder *= 10;
        reminder += digit - '0';
        reminder %= x;
    }
    if (!reminder)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}