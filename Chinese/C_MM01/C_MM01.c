#include <stdio.h>

int main(void)
{
    double baseLength1 = 0, baseLength2 = 0, height = 0;
    while (scanf("%lf %lf %lf", &baseLength1, &baseLength2, &height) == 3)
    {
        printf("Trapezoid area:%.1lf\n", (baseLength1 + baseLength2) * height / 2);
    }
}
