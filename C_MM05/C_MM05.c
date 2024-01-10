#include <stdio.h>
#include <math.h>

int main(void)
{
    double sideLength = 0;
    scanf("%lf", &sideLength);
    printf("%.1lf\n", round(sideLength * sideLength * 10) / 10);
}
