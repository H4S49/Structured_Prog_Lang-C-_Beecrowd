#include<stdio.h>
int main(){
    int M,N,i,j,sum1,sum2;
    
    while(1){
        scanf("%d %d",&M,&N);
        if(M==0 || N==0 || N<=0 || M<=0) break;
        // M<n
        else if(M<N){
            sum1=0;
            for(i=M;i<=N;i++){
                printf("%d ",i);
                sum1=sum1+i;
            }
            printf("Sum=%d\n",sum1);

        }
        //M>N
        else if(M>N){
            sum2=0;
            for(j=N;j<=M;j++){
                printf("%d ",j);
                sum2=sum2+j;
            }
            printf("Sum=%d\n",sum2);

        }
        //M==n
        else if(M==N) printf("%d %d Sum=%d\n",M,N,M+N);
    }


    return 0;
}