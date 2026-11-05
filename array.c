#include <stdio.h>
void fun(double arr[]);
int main() {
    int i;
    double arr[3];
    for (i=0; i<2; i++) {
        scanf("%lf", &arr[i]);
    }
    fun(arr);
    return 0;
}
void fun(double arr[]) {
    printf("%lf %lf\n", arr[0],arr[1]);
}