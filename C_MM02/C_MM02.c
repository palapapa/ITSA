#include <stdio.h>

int main(void)
{
    double base = 0, height = 0;
    while (scanf("%lf %lf", &base, &height) == 2)
    {
        printf("%.1lf\n", base * height / 2);
    }
}
