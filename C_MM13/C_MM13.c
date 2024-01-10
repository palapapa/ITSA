#include <stdio.h>

int main(void)
{
    int startHour = 0, startMinute = 0, endHour = 0, endMinute = 0;
    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);
    int durationInMinutes = (endHour - startHour) * 60 + endMinute - startMinute;
    int timeSegmentCount = (durationInMinutes - durationInMinutes % 30) / 30;
    int totalPrice = 0;
    totalPrice += (timeSegmentCount >= 4 ? 4 : timeSegmentCount) * 30;
    if (timeSegmentCount > 4)
    {
        totalPrice += (timeSegmentCount >= 8 ? 4 : timeSegmentCount - 4) * 40;
    }
    if (timeSegmentCount > 8)
    {
        totalPrice += (timeSegmentCount - 8) * 60;
    }
    printf("%d\n", totalPrice);
}
