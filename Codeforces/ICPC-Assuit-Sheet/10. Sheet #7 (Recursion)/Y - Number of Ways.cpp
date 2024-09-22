
#include <iostream>
#include <climits>
using namespace std;

long long Numberofways(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }

    return Numberofways(s + 1, e) + Numberofways(s + 2, e) + Numberofways(s + 3, e);
}

int main()
{
    int s, e;
    cin >> s >> e;

    cout << Numberofways(s, e);

    return 0;
}