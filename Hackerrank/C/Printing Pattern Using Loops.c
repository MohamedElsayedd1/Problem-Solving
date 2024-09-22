#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int x = n;
      // Complete the code to print the pattern.
    int size = 2*n-1;
    int arr[size][size];
    int end = size - 1;
    int start = 0;
    
    while(x != 0){
        
        for(int i = start; i <= end; i++){
            for(int j = start; j <= end; j++){
                arr[i][j] = x;
            }
        }
        start++;
        end--;
        x--;
    }
    
    for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
    }
    return 0;
}
