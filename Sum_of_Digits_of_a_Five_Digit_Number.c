#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n=10564;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int a = n%10;
    int b = (n / 10)%10;
    int c = (n / 100)%10;
    int d = (n / 1000)%10;
    int e = (n / 10000) % 10;
    int sum = a + b + c + d + e;
    printf("%d", sum);
    return 0;
}