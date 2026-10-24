#include<stdio.h>
int main(){
    int a,N,i,j,sum1,sum2;

    while(1){
        scanf("%d",&N);

        if(N==0) break;
        else if(N%2==0){
            sum1=0;
            for(i=N;i<=(N+8);i=i+2){
                sum1=sum1+i;
            }
            printf("%d\n",sum1);
        }
        else if(N%2!=0){
            sum2=0;
            a=N+1;
            for(i=a;i<=(a+8);i=i+2){
                sum2=sum2+i;
            }
            printf("%d\n",sum2);
        }
    }

    return 0;
}