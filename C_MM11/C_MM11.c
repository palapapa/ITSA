#include <stdio.h>

int main(void)
{
    int price = 0, tenDollarCoinCount = 0, fiveDollarCoinCount = 0, oneDollarCoinCount = 0;
    scanf("%d", &price);
    while (price >= 10)
    {
        tenDollarCoinCount++;
        price -= 10;
    }
    while (price >= 5)
    {
        fiveDollarCoinCount++;
        price -= 5;
    }
    while (price >= 1)
    {
        oneDollarCoinCount++;
        price -= 1;
    }
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", tenDollarCoinCount, fiveDollarCoinCount, oneDollarCoinCount);
}
