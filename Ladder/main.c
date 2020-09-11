#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    int h, v;
    scanf("%d %d", &h, &v);
    float rad = (v * (PI / 180.0));
    float res = (h / sin(rad));
    printf("%.0f", ceil(res));
    return 0;
}