#include <iostream>
#include <string>

using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    bool isLeft = true;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if ((j == col - 1) && (isLeft == true))
                {
                    cout << "#";
                }
                else if ((j == 0) && (isLeft == false))
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        if (isLeft && i % 2 != 0)
            isLeft = false;
        else if (!isLeft && i % 2 != 0)
            isLeft = true;

        cout << endl;
    }

    return 0;
}