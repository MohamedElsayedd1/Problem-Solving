#include <iostream>
using namespace std;

int main() {
    unsigned long long seatNumber;
    cin >> seatNumber;

    // Calculate the row and column
    unsigned long long row = seatNumber / 4;
    unsigned long long column;
    if(row % 2 == 0){
        column = seatNumber % 4;
    }
    else{
        column = 3-(seatNumber%4);
    }

    cout << row << " " << column << endl;

    return 0;
}