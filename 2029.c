#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, hight, area, pie = 3.14;

    while (scanf("%lf %lf", &a, &b) != EOF)
    {
        area = pie * (b / 2) * (b / 2);
        hight = a / area;

        printf("ALTURA = %.2lf\n", hight);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}
