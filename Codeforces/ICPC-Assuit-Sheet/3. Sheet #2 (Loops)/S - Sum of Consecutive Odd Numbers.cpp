// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    unsigned int n;
    unsigned long long int sum = 0;
    unsigned int a, b;
    unsigned int min, max;
    int counter = 0;
    cin >> n;
    while(n != 0){
        n--;
        cin >> a >> b;
        if(a >= b){
            max = a;
            min = b;
        }
        else{
            max = b;
            min = a;
        }
        for(int i = min+1; i < max; i++){
            if(i % 2 == 1){
                sum += i;
                counter++;
            }
        }
        cout << sum << endl;
        counter = 0;
        sum = 0;
    }
    

    return 0;
}