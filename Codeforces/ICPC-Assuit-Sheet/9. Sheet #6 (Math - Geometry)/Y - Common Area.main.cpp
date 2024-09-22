#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int index = 1;

    while(t--) {
        int N;
        cin >> N;

        long long x_min = -100000, x_max = 100000;
        long long y_min = -100000, y_max = 100000;

        for (int i = 0; i < N; ++i) {
            long long x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            x_min = max(x_min, x1);
            x_max = min(x_max, x2);
            y_min = max(y_min, y1);
            y_max = min(y_max, y2);
        }

        long long width = max(0LL, x_max - x_min);
        long long height = max(0LL, y_max - y_min);
        long long area = width * height;

        cout << "Case #" <<index << ": " << area << endl;
        index++;
    }

    return 0;
}