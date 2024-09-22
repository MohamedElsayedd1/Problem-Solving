#include <stdio.h>
#include <stdlib.h>

int n;
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%d", &n);

    int *arr = (int *) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = (n - 1); i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;

}