#include <stdio.h>

int main()
{
    int xOne, yOne, xTwo, yTwo, xThree, yThree, xFour, yFour;

    scanf("%d%d", &xOne, &yOne);
    scanf("%d%d", &xTwo, &yTwo);
    scanf("%d%d", &xThree, &yThree);

    if (xOne == xTwo)
    {
        xFour = xThree;
    }
    else if (xTwo == xThree)
    {
        xFour = xOne;
    }
    else if (xOne == xThree)
    {
        xFour = xTwo;
    }
    else
    {
        xFour = xOne;
    }

    if (yOne == yTwo)
    {
        yFour = yThree;
    }
    else if (yTwo == yThree)
    {
        yFour = yOne;
    }
    else if (yOne == yThree)
    {
        yFour = yTwo;
    }
    else
    {
        yFour = yOne;
    }
    printf("%d %d", xFour, yFour);
    return 0;
}