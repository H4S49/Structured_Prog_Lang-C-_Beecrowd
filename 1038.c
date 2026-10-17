#include <stdio.h>
int main()
{
    double X, Y, total;
    scanf("%lf %lf", &X, &Y);
    if (X == 1)
        total = Y * 4;
    else if (X == 2)
        total = Y * 4.50;
    else if (X == 3)
        total = Y * 5;
    else if (X == 4)
        total = Y * 2;
    else
        total = Y * 1.50;

    printf("Total: R$ %.2lf\n", total);

    return 0;
}
