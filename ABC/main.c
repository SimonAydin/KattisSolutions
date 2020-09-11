#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int o[4];
    o[0] = -9000;
    char order[3];
    scanf("%d %d %d", &o[1], &o[2], &o[3]);
    qsort(o, 4, sizeof(int), cmpfunc);
    scanf("%s", &order);
    if (strcmp(order, "ABC") == 0)
    {
        printf("%d %d %d", o[1], o[2], o[3]);
    }
    else if (strcmp(order, "BAC") == 0)
    {
        printf("%d %d %d", o[2], o[1], o[3]);
    }
    else if (strcmp(order, "CAB") == 0)
    {
        printf("%d %d %d", o[3], o[1], o[2]);
    }
    else if (strcmp(order, "ACB") == 0)
    {
        printf("%d %d %d", o[1], o[3], o[2]);
    }
    else if (strcmp(order, "BCA") == 0)
    {
        printf("%d %d %d", o[2], o[3], o[1]);
    }
    else if (strcmp(order, "CBA") == 0)
    {
        printf("%d %d %d", o[3], o[2], o[1]);
    }
    return 0;
}
