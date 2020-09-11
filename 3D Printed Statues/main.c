#include <stdio.h>

int main()
{
    int n;
    int printers = 1;
    int days = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        if (printers >= n / 2)
        {
            n -= printers;
        }
        else
        {
            printers *= 2;
        }
        days++;
    }
    printf("%d", days);
    return 0;
}
