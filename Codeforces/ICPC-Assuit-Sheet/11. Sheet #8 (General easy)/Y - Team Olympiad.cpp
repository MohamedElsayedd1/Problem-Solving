
#include <iostream>
#include <cmath>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 0;
    int m = 0;
    int ph = 0;
    int programming[5000];
    int math[5000];
    int PE[5000];
    int p_ind = 0;
    int m_ind = 0;
    int pe_ind = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            p++;
            programming[p_ind] = i;
            p_ind++;
        }
        else if (temp == 2)
        {
            m++;
            math[m_ind] = i;
            m_ind++;
        }
        else
        {
            ph++;
            PE[pe_ind] = i;
            pe_ind++;
        }
    }

    int minimum = min({p, ph, m});
    cout << minimum << endl;

    for (int i = 0; i < minimum; i++)
    {
        cout << programming[i] + 1 << " " << math[i] + 1 << " " << PE[i] + 1 << endl;
    }
    return 0;
}