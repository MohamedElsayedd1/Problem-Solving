#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int n;
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%d", &n);
    int sum = 0;
    int *arr = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        sum+= arr[i];
    }
    printf("%d", sum);
    return 0;

}

