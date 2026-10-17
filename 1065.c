#include <stdio.h>

int main() {
    int i,count = 0,var[5];

    for (i=0; i<5; i++) {
        scanf("%d", &var[i]);

        if (var[i] % 2 == 0) {
            count++;
        }
    }

    printf("%d valores pares\n", count);
    return 0;
}