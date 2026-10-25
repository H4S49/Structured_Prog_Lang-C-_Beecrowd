#include<stdio.h>
int main(){
    int i,N,a,b,sum=0;
    scanf("%d",&N);
    a=0,b=1;
    printf("%d %d",a,b);
    for(i=0;i<=N-3;i++){
        sum=a+b;
        a=b,b=sum;
        printf(" %d",sum);
    }
    printf("\n");
    return 0;
}