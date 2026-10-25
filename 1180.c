#include <stdio.h>
int main()
{
    int i, j, N;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++) scanf("%d", &arr[i]);
    int a = arr[0];
    int index = 0;
    for (j = 1; j < N; j++)
    {
        if (arr[j] < a)
        {
            a = arr[j];
            index = j;
        }
    }
    printf("Menor valor: %d\n", a);
    printf("Posicao: %d\n", index);
    return 0;
}
