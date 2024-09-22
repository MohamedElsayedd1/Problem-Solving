#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size; 
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i]; 
	}
	bool b = 0;
	for(int i=0;i<size;i++){ 
		double r1 = (double)arr[i] / 2;
		if(arr[i] % 2 == 0){ 
			arr[i] = arr[i] / 2;
		} else {
			if(b == 0){
				arr[i] = ceil(r1); 
				b = 1;
			} else {
				arr[i] = floor(r1);
				b = 0;
			}
		}
	}
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl; 
	}
	
}