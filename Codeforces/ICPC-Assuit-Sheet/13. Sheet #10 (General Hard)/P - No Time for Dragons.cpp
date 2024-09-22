#include <bits/stdc++.h>
using namespace std;

int main() {
    int size; 
    cin >> size;
    
    vector<pair<long long, pair<long long, long long>>> vec(size);
    
    for(int i = 0 ; i < size; i++){
        long felem, selem;
        cin >> felem >> selem; 
        long sub = felem - selem;
        vec[i].first = sub;
        vec[i].second.first = felem;
        vec[i].second.second = selem;
    }
    
    sort(vec.begin(), vec.end());
    
    long long soldiers = vec[size-1].second.first;
    long long liveSoliders = vec[size-1].first;

    for(int i = size-2; i >= 0; i--){
        if(liveSoliders < vec[i].second.first){
            soldiers += vec[i].second.first - liveSoliders;
            liveSoliders = vec[i].first;
        }
        else{
            liveSoliders -= vec[i].second.second;
        }
    }
    cout << soldiers;
    return 0;
}