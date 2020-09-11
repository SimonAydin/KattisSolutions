#include <stdio.h>

int main()
{
    int highScore = 0;
    int highScoreId = 0;
    for (int i = 0; i < 5; i++)
    {
        int first, second, third, fourth;
        scanf("%d %d %d %d", &first, &second, &third, &fourth);
        if ((first + second + third + fourth) > highScore)
        {
            highScoreId = i + 1;
            highScore = (first + second + third + fourth);
        }
    }
    printf("%d %d", highScoreId, highScore);
    return 0;
}