
#include <iostream>
using namespace std;

int main()
{
    string n1;
    string n2;
    int count1;
    int count2;
    cin >> n1;
    count1 = n1.size();
    cin >> n2;
    count2 = n2.size();

    cout << count1 << " " << count2 << endl;
    cout << n1 + " " + n2;

    return 0;
}
