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
    vector<int> v;
    for(int i = 0; i < n; i++){
        int temp; 
        cin >> temp;
        v.push_back(temp);
    }  
    int x;
    cin >> x;
    v.erase(v.begin()+ x - 1, v.begin() + x);
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin()+b-1);
    
    cout << v.size() << endl;
    
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}
