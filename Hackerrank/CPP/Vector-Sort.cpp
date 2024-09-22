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
    for(auto x : v){
        cout << x << " ";
    }
    
    return 0;
}
