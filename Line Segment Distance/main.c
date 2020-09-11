#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int onLine(int aX, int aY, int bX, int bY, int pointX, int pointY)
{
    if (pointX <= fmax(aX, bX) && pointX <= fmin(aX, bX) && (pointY <= fmax(aY, bY) && pointY <= fmin(aY, bY)))
    {
        return 1;
    }
    return 0;
}

int orientation(int aX, int aY, int bX, int bY, int cX, int cY)
{
    int val = ((bY - aY) * (cX - bX) - (bX - aX) * (cY * bY));
    if (val == 0)
    {
        return 0;
    }
    else if (val < 0)
    {
        return 2;
    }
    return 1;
}

int isIntersect(int aX, int aY, int bX, int bY, int cX, int cY, int dX, int dY)
{
    int dir1 = orientation(aX, aY, bX, bY, cX, cY);
    int dir2 = orientation(aX, aY, bX, bY, dX, dY);
    int dir3 = orientation(cX, cY, dX, dY, aX, aY);
    int dir4 = orientation(cX, cY, dX, dY, bX, bY);

    if (dir1 != dir2 && dir3 != dir4)
    {
        return 1;
    }
    if (dir1 == 0 && onLine(aX, aY, bX, bY, cX, cY) == 1)
    {
        return 1;
    }
    if (dir2 == 0 && onLine(aX, aY, bX, bY, dX, dY) == 1)
    {
        return 1;
    }
    if (dir3 == 0 && onLine(cX, cY, dX, dY, aX, aY) == 1)
    {
        return 1;
    }
    if (dir4 == 0 && onLine(cX, cY, dX, dY, bX, bY) == 1)
    {
        return 1;
    }
    return 0;
}

int compare(const void *a, const void *b)
{
    float fa = *(const float *)a;
    float fb = *(const float *)b;
    return (fa > fb) - (fa < fb);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int v[8];
        scanf("%d %d %d %d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7]);
        if (isIntersect(v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7]) == 1)
        {
            printf("0.00");
        }
        else
        {
            float firstDis = sqrt(((v[4] - v[0]) ^ 2) + ((v[5] - v[1]) ^ 2));
            float secondDis = sqrt(((v[6] - v[0]) ^ 2) + ((v[7] - v[1]) ^ 2));
            float thirdDis = sqrt(((v[4] - v[2]) ^ 2) + ((v[5] - v[3]) ^ 2));
            float fourDis = sqrt(((v[6] - v[2]) ^ 2) + ((v[7] - v[3]) ^ 2));
            float vS[] = {firstDis, secondDis, thirdDis, fourDis};
            qsort(vS, 4, sizeof(float), compare);
            printf(".2%f", firstDis);
        }
    }

    return 0;
}
