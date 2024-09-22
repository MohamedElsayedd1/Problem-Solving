
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x1, y1, x2, y2;

    cout << fixed << setprecision(9);

    cin >> x1 >> y1 >> x2 >> y2;

    double dis = sqrt(abs(pow((x2 - x1), 2)) + abs(pow((y2 - y1), 2)));

    cout << dis;

    return 0;
}