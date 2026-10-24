#include<stdio.h>
int main(){
    int i,j;
    double A[100];

    for(i=0;i<100;i++){
        scanf("%lf",&A[i]);
    }
    for(j=0;j<100;j++){
        if(A[j]<=10.0) printf("A[%d] = %.1lf\n",j,A[j]);
        else continue;
    }

    return 0;
}