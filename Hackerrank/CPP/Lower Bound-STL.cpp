#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<long long int> v;
    for(int i = 0; i < n; i++){
        long long int temp;
        cin >> temp;
        v.push_back(temp);
    } 
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while(q--){
        int y;
        cin >> y;
        auto it = lower_bound(v.begin(), v.end(), y);
        if(*it == y){
            cout << "Yes " << (it - v.begin() + 1) << endl;
        }
        else{
            cout << "No " << (it - v.begin() + 1) << endl;
        }
    }
    return 0;
}

