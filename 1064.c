#include <stdio.h>

int main() {
    int i,count = 0;
    float var[6],sum=0;

    for (i=0; i<6; i++) {
        scanf("%f", &var[i]);
        if (var[i] > 0) {
            
            count++;
            sum = sum + var[i];
        }
    }
    printf("%d valores positivos\n", count);
    printf("%.1f\n",sum/count);
    return 0;
}