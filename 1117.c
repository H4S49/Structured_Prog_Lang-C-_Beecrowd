#include <stdio.h>
int main()
{
    double a, sum = 0, count = 0;

    while (1)
    {
        scanf("%lf", &a);

        if (a >= 0 && a <= 10)
        {
            sum = sum + a;
            count++;

            if (count == 2)
            {
                printf("media = %.2lf\n", sum / 2);
                break;
            }
        }
        else
            printf("nota invalida\n");
    }

    return 0;
}