// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int size = (2*n)+1;
    
    int arr[size];
    for(int i =0; i < size; i++){
        cin >> arr[i];
    }
    
    int start = 1;
    
    for(int i=1;i<size;i++){
		if(arr[i] > arr[i - 1] + 1 && arr[i] > arr[i+1] + 1){
			arr[i]--;
			m--;
			if(m == 0){
				break;
			}
		}
	}
    
    for(int i =0; i < 2*n+1; i++){
        cout << arr[i] << " ";
    }
    
    

    return 0;
}
