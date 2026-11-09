#include <stdio.h>
int main()
{
    int n,i;
    char ch[9999];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf(" %[^\n]", ch);
        printf("I am Toorg!\n");
    }

    return 0;
}
