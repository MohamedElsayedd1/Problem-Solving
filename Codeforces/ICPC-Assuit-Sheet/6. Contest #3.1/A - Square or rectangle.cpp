#include <iostream>
using namespace std;
int main()
{
    unsigned int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int w;
        unsigned long long int l;

        cin >> w >> l;
        if (w == l)
        {
            cout << "Square" << endl;
        }
        else
        {
            cout << "Rectangle" << endl;
        }
    }
    return 0;
}