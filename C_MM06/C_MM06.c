#include <stdio.h>
#include <math.h>

int main(void)
{
    double distanceInMiles = 0;
    scanf("%lf", &distanceInMiles);
    printf("%.1lf\n", round(distanceInMiles * 1.6 * 10) / 10);
}
