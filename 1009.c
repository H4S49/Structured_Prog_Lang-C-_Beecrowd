#include <stdio.h>

int main() {
    char name;
    double a,b,total;
    scanf("%s", name);
    scanf("%lf %lf", &a,&b);
    total = a + b*0.15;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
