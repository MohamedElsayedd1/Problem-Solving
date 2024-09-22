#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    
    vector<vector<char>> arr(r, vector<char>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    
    vector<vector<bool>> marked(r, vector<bool>(c, false));
    vector<tuple<int, int, int>> stars;

    // Traverse the grid to find potential star centers
    for(int i = 1; i < r-1; i++){
        for(int j = 1; j < c-1; j++){
            if(arr[i][j] == '*'){
                int armLength = 0;
                
                while(i-armLength-1 >= 0 && i+armLength+1 < r && 
                      j-armLength-1 >= 0 && j+armLength+1 < c &&
                      arr[i-armLength-1][j] == '*' && 
                      arr[i+armLength+1][j] == '*' && 
                      arr[i][j-armLength-1] == '*' && 
                      arr[i][j+armLength+1] == '*') {
                    armLength++;
                }
                
                if(armLength > 0){
                    stars.push_back({i+1, j+1, armLength});
                    marked[i][j] = true;
                    for(int k = 1; k <= armLength; k++){
                        marked[i-k][j] = true;
                        marked[i+k][j] = true;
                        marked[i][j-k] = true;
                        marked[i][j+k] = true;
                    }
                }
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] == '*' && !marked[i][j]){
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << stars.size() << endl;
    for(auto& star : stars){
        int x, y, size;
        tie(x, y, size) = star;
        cout << x << " " << y << " " << size << endl;
    }

    return 0;
}
