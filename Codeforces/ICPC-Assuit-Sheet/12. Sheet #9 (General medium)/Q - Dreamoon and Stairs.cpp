// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n, m;
    cin >> n;
    cin >> m;
    
    if(m > n){
        cout << -1;
        return 0;
    }
    
    int min_step = (n+1) / 2;
    int max_step = n;
    
    if(min_step % m == 0){
        cout << min_step;
    }
    else{
        for(int i = min_step; i <= n; i++){
            if(i % m == 0){
                cout << i;
                return 0;
            }
        }
        cout << -1;
    }
    return 0;
}

// Another solution 

#include <iostream>

using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
    
//     
//     int min_moves = (n + 1) / 2;
    
//     
//     if (min_moves % m == 0) {
//         cout << min_moves << endl;
//     } else {
//         int result = ((min_moves + m - 1) / m) * m; 
//         if (result <= n) {
//             cout << result << endl;
//         } else {
//             cout << -1 << endl;
//         }
//     }

//     return 0;
// }
