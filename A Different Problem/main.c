#include <stdio.h>
#include <string.h>

int main()
{
    long long a, b;
    char c[1000] = "";
    while (scanf("%lld %lld", &a, &b) == 2)
    {
        long ab = 0;
        if (b > a)
        {
            ab = b - a;
        }
        else
        {
            ab = a - b;
        }
        char cs[10000];
        sprintf(cs, "%lld", ab);
        strcat(c, cs);
        strcat(c, "\n");
    }
    printf("%s", c);
    return 0;
}