#include <stdio.h>
int main()
{
    int x, j, i, N;
    unsigned long long int a, b, sum;
    scanf("%d", &x);
    for (j = 1; j <= x; j++)
    {
        scanf("%d", &N);
        if (N == 0)
            printf("Fib(0) = 0\n");
        else if (N == 1)
            printf("Fib(1) = 1\n");
        else
        {
            a = 0, b = 1, sum = 0;
            for (i = 0; i <= N - 2; i++)
            {
                sum = a + b;
                a = b, b = sum;
            }
            printf("Fib(%d) = %llu", N, sum);
            printf("\n");
        }
    }
    return 0;
}