#include <stdio.h>

int main(void)
{
    long long num = 0;
    scanf("%lld", &num);
    if (num > 31)
    {
        printf("Value of more than 31\n");
    }
    else
    {
        printf("%d\n", 1 << num);
    }
}
