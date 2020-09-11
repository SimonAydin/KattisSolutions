#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p = 2;
    int factors = 1;
    while (n >= p * p)
    {
        if (n % p == 0)
        {
            factors++;
            n = n / p;
        }
        else
        {
            p = p + 1;
        }
    }
    printf("%d", factors);
    return 0;
}