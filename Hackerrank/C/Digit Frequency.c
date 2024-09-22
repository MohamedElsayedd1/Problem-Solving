#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1000];
    gets(str);
    int n = strlen(str);
    char digits[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int count = 0;
    for(int j = 0; j < 10; j++)
    {
        for(int i = 0; i < n; i++)
        {
            if(str[i] == digits[j])
            {
                count++;
            }
        }
        printf("%d ", count);
        count = 0;
    }

    return 0;
}