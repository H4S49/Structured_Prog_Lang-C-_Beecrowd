#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int len;
    double b = 1.0 / 100;
    scanf("%d", &n);
    char ch[10000];
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", ch);
        len = strlen(ch);
    
    printf("%.2lf", len*b);
    }
    return 0;
}
