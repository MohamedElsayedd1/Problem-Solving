#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<unsigned long int> vec;
    unsigned long int n;
    cin >> n;
    while(n--){
        unsigned long long k; 
        cin >> k;
        unsigned int temp = 0;
        while(k){
            if(k % 2 == 0){
                temp++;
                k /= 2;
            }
            else{
                break;
            }
        }
        
        vec.push_back(temp);
    }
    
    unsigned int max = vec[0];
    for(auto const &ele : vec){
        if(ele > max){
            max = ele;
        }
    }
    cout << max << endl;
    return 0;
}
