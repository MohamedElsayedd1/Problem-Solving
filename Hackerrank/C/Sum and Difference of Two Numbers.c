#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

signed int num1, num2;
float n1, n2;
int main()
{
	scanf("%d %d\n", &num1, &num2);
    scanf("%f %f\n", &n1, &n2);
    printf("%d %d\n", (num1 + num2), (num1 - num2));
    printf("%.1f %.1f\n", (n1 + n2), (n1 - n2));
    return 0;
}