// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    
    long long arr[n];
    priority_queue<pair<int,int>> qp; // queue of pairs
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        qp.push({arr[i], i});
    }
    
    int maxCount = INT_MIN;
    
    
    for(int i = 0; i < n; i++){
        while(qp.size() && qp.top().first >= arr[i]){
            maxCount = max(maxCount, qp.top().second - i);
            qp.pop();
        }
    }
    
    cout << maxCount;
    return 0;
}