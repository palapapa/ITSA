#include <stdio.h>

int main(void)
{
    unsigned x = 0, y = 0;
    while(scanf("%u %u", &x, &y) == 2)
    {
        printf("%s\n", x <= 100 && y <= 100 ? "inside" : "outside");
    }
}
