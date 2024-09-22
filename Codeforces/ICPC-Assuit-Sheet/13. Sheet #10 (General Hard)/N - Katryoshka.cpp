// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 
int main() {
    // Write C++ code here
    unsigned long long int body, eye, mouth;
    unsigned long long int l = 0;
    cin >> eye >> mouth >> body;
    while(body != 0 || eye != 0){
        if(body > 0 && eye > 0 && mouth > 0){
            if(body <= eye && body <= mouth){
                eye -= body;
                mouth -= body;
                l += body;
                body = 0;
                cout << l;
                return 0;
            }
            else if(eye <= body && eye <= mouth){
                body -= eye;
                mouth -= eye;
                l += eye;
                eye = 0;
                cout << l;
                return 0;
            }
            else if(mouth <= eye && mouth <= body){
                eye -= mouth;
                l += mouth;
                body -= mouth;
                mouth = 0;
            }
        }
        else if(body > 0 && eye > 0){
            if(body >= eye/2){
                l += eye/2;
                eye = 0;
                cout << l;
                return 0;
            }
            else{
                l += body;
                body = 0;
                cout << l;
                return 0;
            }
        }
        else{
            break;
        }
        
    }
    cout << l;
    return 0;
}
