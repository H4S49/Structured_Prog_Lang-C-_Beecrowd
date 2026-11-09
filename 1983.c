#include <stdio.h>
int main()
{
    int a, n, i, arr[9000];
    double x, new[9000];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %lf", &arr[i], &new[i]);
    }

    a = -1;
    for (i = 1; i <= n; i++)
    {
        if (new[i] >= 8.0)
        {
            if (arr[i] > a)
            {
                a = arr[i];
            }
        }
    }
    if (a == -1)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", a);

    return 0;
}