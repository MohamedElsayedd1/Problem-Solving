#include <iostream>
#include <climits>
using namespace std;


int main() {
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < r; i++){
        bool switch_ = true;
        if(i % 2){
            switch_ = false;
        }
        for(int j = 0; j < c; j++){
           if (arr[i][j] == '.') { 
                if ((i + j) % 2 == 0) {
                    arr[i][j] = 'B';
                } else {
                    arr[i][j] = 'W';
                }
            }
        }
    }
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<< arr[i][j];
        }
        cout << endl;
    }
    return 0;
}