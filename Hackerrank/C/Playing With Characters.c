#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    scanf("%c\n", &ch);  
    
    char s[100];
    gets(s);
    
    char sen[100];
    gets(sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}