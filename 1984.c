#include <stdio.h>
#include <string.h>
int main()
{
    char num[100], i, a;
    scanf("%s", num);
    a = strlen(num);
    for (i = a - 1; i >= 0; i--)
    {
        printf("%c", num[i]);
    }
    printf("\n");

    return 0;
}