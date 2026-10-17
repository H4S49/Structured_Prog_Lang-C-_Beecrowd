#include <stdio.h>
int main()
{
    double a, b, c, A, B, C, temp;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    A = c;
    B = b;
    C = a;

    if (A != 0 && B != 0 && C != 0)
    {
        if (A >= (B + C))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
            else
            {
                if (A * A == (B * B + C * C))
                    printf("TRIANGULO RETANGULO\n");
                if (A * A > (B * B + C * C))
                    printf("TRIANGULO OBTUSANGULO\n");
                if (A * A < (B * B + C * C))
                    printf("TRIANGULO ACUTANGULO\n");
                if (A == B && B == C && A == C)
                    printf("TRIANGULO EQUILATERO\n");
                else if (A == B || B == C || A == C)
                    printf("TRIANGULO ISOSCELES\n");
            }
    }

    return 0;
}