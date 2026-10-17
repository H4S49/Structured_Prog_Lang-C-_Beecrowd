#include <stdio.h>
int main()
{
    int i, X, Y, sum = 0;
    scanf("%d %d",&X,&Y);

    if (X % 2 == 0)
    {
        for (i = X; i > Y; i--)
        {
            if (i % 2 != 0)
                sum = sum + i;
        }
        printf("%d\n", sum);
    }

    else
    {
        for (int j = X - 1; j > Y; j--)
        {
            if (j % 2 != 0)
                sum = sum + j;

        }
        printf("%d\n", sum);
    }

    return 0;
}