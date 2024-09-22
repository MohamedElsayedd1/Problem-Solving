#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<signed long long int> d;
    signed long long int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        d.push_back(temp);
    }

    while (!d.empty())
    {
        cout << d.front() << " ";
        d.pop_front();
        if (d.empty())
        {
            break;
        }
        cout << d.back() << " ";
        d.pop_back();
    }

    return 0;
}

// Another solution

// int main() {
//     int n;
//     cin >> n;

//     signed long long int arr[n];

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int left = 0;
//     int right = n -1;

//     while(left <= right){
//         if(left == right){
//             cout << arr[left] << " ";
//         }
//         else{
//             cout << arr[left] << " " << arr[right] << " ";
//         }
//         left++;
//         right--;
//     }

//     return 0;
// }