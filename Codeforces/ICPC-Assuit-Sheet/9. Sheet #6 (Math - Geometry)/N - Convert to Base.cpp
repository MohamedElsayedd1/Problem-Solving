// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int convert_char_to_int(char ch){
    if(ch >= '0' && ch <= '9')
        return ch - '0';
    else if(ch >= 'A')
        return ch - 'A' + 10;
}

char convert_int_to_char(int num){
    if(num >= 0 && num <= 9)
        return num + '0';
    else if(num >= 10)
        return num - 10 + 'A';
}

int main() {
    
    int t, x;
    string n;
    
    cin >> t >> n >> x;
    string base_num;
    
    if(t == 1){
        unsigned long long int dec =convert_char_to_int(n[n.size()-1]) * 1;
        int count = 1;
        for(int i = n.size()-2; i >=0 ;i--){
            dec += convert_char_to_int(n[i]) * pow(x, count);
            count++;
        }
        cout << dec;
        
    }
    else if(t==2){
        unsigned long long int num = stoull(n);
        while(num != 0){
            int reminder = num % x;
            num /= x;
            base_num += convert_int_to_char(reminder);
        }
        reverse(base_num.begin(), base_num.end());
        cout << base_num;
    }
    

    return 0;
}