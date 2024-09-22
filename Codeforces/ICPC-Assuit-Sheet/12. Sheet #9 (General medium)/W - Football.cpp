// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string t1;
    string t2;
    
    int t1_count = 0;
    int t2_count = 0;
    
    if(n==1){
        cin >> t1;
        cout << t1;
        return 0;
    }

    
    for(int i = 0; i < n; i++){
        string team;
        cin >> team;
        if(i == 0){
            t1 = team;
            t1_count++;
        }
        else if(team == t1){
            t1_count++;
        }
        else if(t2.empty()){
            t2 = team;
            t2_count++;
        }
        else if(team == t2){
            t2_count++;
        }
    }
    
    if(t1_count > t2_count){
        cout << t1;
    }
    else{
        cout << t2;
    }

    return 0;
}