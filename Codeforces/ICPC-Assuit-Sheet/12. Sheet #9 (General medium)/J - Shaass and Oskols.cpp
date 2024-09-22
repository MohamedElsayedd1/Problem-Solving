// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int main() {
   
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int m;
    cin >> m;
    
    while(m--){
        int x, y;
        cin >> x >> y;

        if(x == 1){
            a[x] += a[x-1] - y;
            a[x-1] = 0;
        }
        else if(x == n){
            a[x-2] += y - 1;
            a[x-1] = 0;
        }
        else{
            a[x-2] += y - 1;
            a[x] += a[x-1] - y;
            a[x-1] = 0;
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    

    return 0;
}