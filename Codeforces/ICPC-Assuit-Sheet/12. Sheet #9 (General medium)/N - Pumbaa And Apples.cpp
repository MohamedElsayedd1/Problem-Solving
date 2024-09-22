#include <iostream>

using namespace std;

void SwapRows(int rows[1000], int x, int y){
    int temp = rows[x];
    rows[x] = rows[y];
    rows[y] = temp;
}

void SwapCols(int cols[1000], int x, int y){
    int temp = cols[x];
    cols[x] = cols[y];
    cols[y] = temp;
}

void FAST(){
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}

int main() {
    FAST();
    int row, col;
    int instruction;
    
    cin >> row >> col >> instruction;
    
    int arr[1000][1000];
    int row_map[1000], col_map[1000];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
            col_map[j] = j;
        }
        row_map[i] = i;
    }
    
    while(instruction--){
        char order;
        int x;
        int y;
        cin >> order >> x >> y;
        x--; y--;
        switch(order){
            case 'r' : 
            SwapRows(row_map, x, y);
            break;
            case 'c' : 
            SwapCols(col_map, x, y);
            break;
            case 'g':
            cout << arr[row_map[x]][col_map[y]] << endl;
            break;
        }
    }
    
    return 0;
}
