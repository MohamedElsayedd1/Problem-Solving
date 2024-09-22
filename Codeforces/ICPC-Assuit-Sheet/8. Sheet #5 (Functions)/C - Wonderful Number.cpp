// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int isOdd(int n){
    return n % 2 != 0;
}

int isPalindrome(int n){
    string binary{};
    while(n != 0){
        int temp = n % 2;
        binary += temp+'0';
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    int left = 0;
    int right = binary.size()-1;
    while(left < right){
        if(binary[left] != binary[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << isPalindrome(n) << endl;
    if(isOdd(n) && isPalindrome(n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}