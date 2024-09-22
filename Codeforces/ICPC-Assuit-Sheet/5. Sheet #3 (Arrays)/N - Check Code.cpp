#include <iostream>
#include <limits.h>
#include <ctype.h> 
using namespace std; 


int main() {
    unsigned long long int a,b;
    string s;
    cin >> a >> b;
    int flag = 0;
    cin.ignore();
    getline(cin, s);
    if((s.size() != a+b+1) || (s[a] != '-')){
        cout << "No";
        return 0;
    }
    for(int i = 0; i < s.size(); i++){
        if(!isdigit(s[i]) && s[i] != '-'){
            cout << "No";
            return 0;
        }
        if(s[i] == '-'){
            flag++;
            if(flag > 1){
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    
    

    return 0;
}
