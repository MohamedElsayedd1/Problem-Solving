#include <iostream>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    
    long long int x1, x2;
    long long int count  = 0;
    for(int i = 0; i < n; i++){
        cin >> x1 >> x2;
        count += x2-x1+1;
    }
    
    count %= m;
    
    if(count == 0){
        cout << 0;
    }
    else{
        cout << m - count;
    }
    
    

    return 0;
}
