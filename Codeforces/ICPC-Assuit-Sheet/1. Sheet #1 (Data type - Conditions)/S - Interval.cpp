#include <iostream>
#include <iomanip> // for setprecision if needed

using namespace std;

int main() {
    double x;
    cin >> x;

    if (x >= 0 && x <= 25.000000000) {
        cout << "Interval [0,25]\n";
    }
    else if (x > 25.000000000 && x <= 50.000000000) {
        cout << "Interval (25,50]\n";
    }
    else if (x > 50.000000000 && x <= 75.000000000) {
        cout << "Interval (50,75]\n";
    }
    else if (x > 75.000000000 && x <= 100.000000000) {
        cout << "Interval (75,100]\n";
    }
    else {
        cout << "Out of Intervals\n";
    }

    return 0;
}
