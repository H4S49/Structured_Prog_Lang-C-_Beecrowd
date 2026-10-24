#include <stdio.h>
int main()
{
    int i, j, X[1000], n;

    scanf("%d", &n);

    i=0;
    for (j = 0; j < 1000; j++){
    printf("N[%d] = %d\n",j,i);
    i++;
        if(i==n) i=0;

        
    }

    return 0;
}






