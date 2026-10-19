#include<stdio.h>
int main(){
    int a=1,b=3,N,i,j;
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        for(j=a;j<=b;j++){
            printf("%d ",j);
        }
        a=a+4;b=b+4;
        printf("PUM\n");
    }



    return 0;
}