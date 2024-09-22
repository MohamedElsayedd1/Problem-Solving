#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    int egy_counter = 0;
    int final_counter = 0;

    vector<int> egypt(5, 0);

    egypt[0] = count_if(s.begin(), s.end(), [](char l){ return l == 'e' || l == 'E'; });
    egypt[1] = count_if(s.begin(), s.end(), [](char l){ return l == 'g' || l == 'G'; });
    egypt[2] = count_if(s.begin(), s.end(), [](char l){ return l == 'y' || l == 'Y'; });
    egypt[3] = count_if(s.begin(), s.end(), [](char l){ return l == 'p' || l == 'P'; });
    egypt[4] = count_if(s.begin(), s.end(), [](char l){ return l == 't' || l == 'T'; });

    auto min_ = min_element(egypt.begin(), egypt.end());

    if(min_ != egypt.end()){
        cout << *min_ << endl;
    }


    return 0;
}