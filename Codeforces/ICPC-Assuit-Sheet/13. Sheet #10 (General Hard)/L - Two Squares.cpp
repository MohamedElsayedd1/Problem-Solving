// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

int main() {
    // Write C++ code here
    double l, s1, s2;
    cin >> l >> s1 >> s2;
    int q;
    cin >> q;
    while(q--){
        double n;
        cin >> n;
        double time = sqrt(2) * (l - sqrt(n)) / (s2 - s1);
		cout<<fixed<<setprecision(6)<<abs(time)<<endl;
    }

    return 0;
}