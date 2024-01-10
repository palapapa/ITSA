#include <stdio.h>
#include <math.h>

int main(void)
{
    double temperatureInCelsius = 0;
    scanf("%lf", &temperatureInCelsius);
    printf("%.1lf\n", round((temperatureInCelsius * 9 / 5 + 32) * 10) / 10);
}
