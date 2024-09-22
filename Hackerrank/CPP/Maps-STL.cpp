#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string, int> m;
    int q;
    cin >> q;
    while(q--){
        int choice, mark;
        string name;
        cin >> choice;
        if(choice == 1){
            cin >> name >> mark;
            m[name] += mark;
        }
        else if(choice == 2){
            cin >> name;
            m.erase(name);
        }
        else{
            cin >> name;
            auto it = m.find(name);
            if(it != m.end()){
                cout << m[name] << endl;
            }
            else{
                cout << "0" << endl;
            }
        }
    } 
    return 0;
}



