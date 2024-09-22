#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int intv;
    long int longv;
    char c;
    float floatv;
    double doublev;
    scanf("%d %ld %c %f %lf",&intv, &longv, &c, &floatv,  &doublev);
    printf("%d\n", intv);
    printf("%ld\n", longv);
    printf("%c\n", c);
    printf("%0.2f\n", floatv);
    printf("%0.9lf\n", doublev);
    return 0;
}
