#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int q;
    cin >> q;
    while(q--){
        int y;
        int num;
        cin >> y >> num;
        if(y == 1){
            s.insert(num);
        }
        else if(y == 2){
            auto it = s.find(num);
            if(it != s.end()){
                s.erase(it);
            }
        }
        else if(y == 3){
            auto it = s.find(num);
            if(it != s.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}



