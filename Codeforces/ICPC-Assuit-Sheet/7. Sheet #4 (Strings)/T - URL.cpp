// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    string arr[] {"username: ", "pwd: ", "profile: ", "role: ", "key: "};
    string s_arr[] {"username=", "pwd=", "profile=", "role=", "key="};
    int start_index[] {9, 4, 8, 5, 4};

    for(int i = 0; i < 5; i++){
        int index = s.find(s_arr[i]);
        if(index != string::npos){
            int start = index + start_index[i];
            while(s[start] != '&' && start != s.size()){
                arr[i] += s[start];
                start++;
            }
        }
        cout << arr[i] << endl;;

    }


    return 0;
}