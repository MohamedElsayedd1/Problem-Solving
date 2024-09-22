#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;
    
    unsigned int arr[rows][columns];
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> arr[i][j];
        }
    }
    
    unsigned int x;
    cin>>x;
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(x == arr[i][j]){
                cout << "will not take number";
                return 0;
            }
        }
    }
    
    cout << "will take number";

    return 0;
}