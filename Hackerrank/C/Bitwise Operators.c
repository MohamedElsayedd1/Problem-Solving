#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int cand = 0, cor = 0, cxor = 0;
  
  for(int i = 1; i <= k; i++){
      
      for(int j = i + 1; j <= n; j++){
          int and = i & j;
          int or = i | j;
          int xor = i ^ j;
          
          if((and < k) && (and > cand)){
              cand = and;
          }
          if((or < k) && (or > cor)){
              cor = or;
          }
          if((xor < k) && (xor > cxor)){
              cxor = xor;
          }
      }
  }
  printf("%d\n", cand);
  printf("%d\n", cor);
  printf("%d\n", cxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}