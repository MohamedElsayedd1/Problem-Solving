#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char grades[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grades[i][j];
        }
    }
    
    int max_grades[m] = {0};
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            max_grades[i] = max(max_grades[i], grades[j][i] - '0');
        }
    }

    set<int> successful;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(max_grades[j] == grades[i][j] - '0'){
                successful.insert(i);
                break;
            }
        }
    }
    
    
    cout << successful.size();

    return 0;
}