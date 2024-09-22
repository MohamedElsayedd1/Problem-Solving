#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(6);
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Valid" << endl;
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << area;
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}
