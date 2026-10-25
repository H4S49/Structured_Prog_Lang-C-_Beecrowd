#include <stdio.h>
int main()
{
    double n,i;
    int j, X[100];

    scanf("%lf", &n);

    i=n;
    for (j = 0; j < 100; j++){
    printf("N[%d] = %.4lf\n",j,i);
    i/=2;

        
    }

    return 0;
}






