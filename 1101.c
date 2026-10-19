#include<stdio.h>
int main(){
    int M,N,i;
    
    while(1){
        scanf("%d %d",&M,&N);
        if(M==N || M==0 || N==0) break;
        else if(M<N){
            for(i=M;i<=N;i++){
                printf("%d ",i);
            }

        }
    }


    return 0;
}