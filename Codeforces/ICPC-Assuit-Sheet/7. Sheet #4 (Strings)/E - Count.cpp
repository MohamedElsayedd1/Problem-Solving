
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    unsigned long long int sum = 0;

    for (char ch : n)
    {
        sum += ch - '0';
    }

    cout << sum << endl;

    return 0;
}