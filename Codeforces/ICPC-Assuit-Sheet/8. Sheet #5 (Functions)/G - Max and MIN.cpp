#include <iostream>
#include <climits>
using namespace std;

int _min = INT_MAX;
int _max = INT_MIN;

void min_max(int elem)
{
    if (elem < _min)
    {
        _min = elem;
    }
    if (elem > _max)
    {
        _max = elem;
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        min_max(num);
    }
    cout << _min << " " << _max;
    return 0;
}
