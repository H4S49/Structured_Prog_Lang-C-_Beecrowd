#include <stdio.h>
int main()
{
    int N, a, b, sum1,sum2,temp;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d %d", &a, &b);
        sum1 = 0;

        if (a <= b)
        {
            for (int j = a + 1; j < b; j++)
            {
                if (j % 2 != 0)
                {
                    sum1 = sum1 + j;
                }
            }
            printf("%d\n", sum1);
        }
        sum2=0;
        if (a > b)
        {
            // temp = a;
            // a = b;
            // b = temp;
            for (int j = a - 1; j > b; j--)
            {
                if (j % 2 != 0)
                {
                    sum2 = sum2 + j;
                }
            }
            printf("%d\n", sum2);
        }
    }

    return 0;
}