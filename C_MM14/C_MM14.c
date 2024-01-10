#include <stdio.h>

int main(void)
{
    unsigned totalSeconds = 0, days = 0, hours = 0, minutes = 0, seconds = 0;
    scanf("%u", &totalSeconds);
    while (totalSeconds > 60 * 60 * 24)
    {
        totalSeconds -= 60 * 60 * 24;
        days++;
    }
    while (totalSeconds > 60 * 60)
    {
        totalSeconds -= 60 * 60;
        hours++;
    }
    while (totalSeconds > 60)
    {
        totalSeconds -= 60;
        minutes++;
    }
    seconds = totalSeconds;
    printf("%u days\n%u hours\n%u minutes\n%u seconds\n", days, hours, minutes, seconds);
}
