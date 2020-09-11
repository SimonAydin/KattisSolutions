#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char c[1000] = "";
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int value;
        scanf("%d", &value);
        if (value % 2 == 0)
        {
            char cs[5];
            sprintf(cs, "%d", value);
            strcat(c, cs);
            strcat(c, " is even\n");
        }
        else
        {
            char cs[5];
            sprintf(cs, "%d", value);
            strcat(c, cs);
            strcat(c, " is odd\n");
        }
    }
    printf("%s", c);
    return 0;
}