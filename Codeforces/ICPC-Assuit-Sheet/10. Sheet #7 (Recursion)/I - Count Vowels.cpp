// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int Count_Vowels(string s, int n)
{
    static int count = 0;

    if (n < 0)
        return count;

    if (tolower(s[n]) == 'e' || tolower(s[n]) == 'u' ||
        tolower(s[n]) == 'o' || tolower(s[n]) == 'a' ||
        tolower(s[n]) == 'i')
    {
        count++;
    }

    return Count_Vowels(s, --n);
}

int main()
{
    // Write C++ code here
    string str;

    getline(cin, str);

    cout << Count_Vowels(str, str.size() - 1);

    return 0;
}