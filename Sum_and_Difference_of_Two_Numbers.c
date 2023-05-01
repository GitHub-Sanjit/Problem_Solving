#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float x, y;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);
    int sumi = a + b;
    int difi = a - b;
    float sumf = x + y;
    float diff = x - y;
    printf("%d %d\n", sumi, difi);
    printf("%0.1f %0.1f\n", sumf, diff);

    return 0;
}