#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    scanf("%s %d", &b, &a);
    scanf("%d %d %d", &c, &d, &e);
    scanf("%s %d", &g, &f);
    scanf("%d %d %d", &h, &i, &j);

    if (h >= c || d >= i || e>=i)
    {
        printf("%d dia(s)\n", f - a);
        printf("%d hora(s)\n", h - c);
        printf("%d minuto(s)\n", d - i);
        printf("%d segundo(s)\n", e-i);
    }
    else if (h >= c || d >= i || e<=i)
    {
        printf("%d dia(s)\n", f - a);
        printf("%d hora(s)\n", h - c);
        printf("%d minuto(s)\n", d - i);
        printf("%d segundo(s)\n", 60-e-i);

    }
    else if (h >= c || d <= i || e<=i)
    {
        printf("%d dia(s)\n", f - a);
        printf("%d hora(s)\n", h - c);
        printf("%d minuto(s)\n", 60-d - i);
        printf("%d segundo(s)\n", 60-e-i);

    }
    else if (h >= c || d <= i || e>=i)
    {
        printf("%d dia(s)\n", f - a);
        printf("%d hora(s)\n", h - c);
        printf("%d minuto(s)\n", 60-d - i);
        printf("%d segundo(s)\n", e-i);

    }

    // new cond 

    if (h <= c || d >= i || e>=i)
    {
        printf("%d dia(s)\n", f - a-1);
        printf("%d hora(s)\n", h - c);
        printf("%d minuto(s)\n", d - i);
        printf("%d segundo(s)\n", e-i);
    }
    else if (h <= c || d >= i || e<=i)
    {
        printf("%d dia(s)\n", f - a-1);
        printf("%d hora(s)\n", h - c);
        printf("%d minuto(s)\n", d - i);
        printf("%d segundo(s)\n", 60-e-i);

    }
    else if (h <= c || d <= i || e<=i)
    {
        printf("%d dia(s)\n", f - a-1);
        printf("%d hora(s)\n", h - c);
        printf("%d minuto(s)\n", 60-d - i);
        printf("%d segundo(s)\n", 60-e-i);

    }
    else if (h <= c || d <= i || e>=i)
    {
        printf("%d dia(s)\n", f - a-1);
        printf("%d hora(s)\n", h - c);
        printf("%d minuto(s)\n", 60-d - i);
        printf("%d segundo(s)\n", e-i);

    }

  
return 0;

}