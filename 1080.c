#include <stdio.h>
int main()
{
    int arr[99999], i, j;

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a = arr[1], index = 1;
    for (j = 1; j <= 100; j++)
    {
        if (arr[j] > a)
        {
            a = arr[j];
            index = j;
        }
    }

    printf("%d\n", a);
    printf("%d\n", index);

    return 0;
}