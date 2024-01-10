#include <stdio.h>
#include <math.h>

int main(void)
{
    double speedDifference = 1 - 0.0254 * 30, distance = 0;
    scanf("%lf", &distance);
    printf("%.0lf\n", ceil(distance / speedDifference));
}
