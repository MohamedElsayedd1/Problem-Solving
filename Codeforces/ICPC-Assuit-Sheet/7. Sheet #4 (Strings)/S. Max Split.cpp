// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    // Write C++ code here
    string s;
    cin >> s;

    int r = 0;
    int l = 0;
    int count = 0;

    char mat[1000][1000] = {0};
    int column = 0, row = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            mat[row][column] = 'L';
            column++;
            l++;
        }
        else if (s[i] == 'R')
        {
            mat[row][column] = 'R';
            column++;
            r++;
        }
        if (r == l)
        {
            count++;
            row++;
            column = 0;
            r = 0;
            l = 0;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (mat[i][j] == 0)
            {
                break;
            }
            cout << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}