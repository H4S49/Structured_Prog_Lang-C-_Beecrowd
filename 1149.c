#include<stdio.h>
int main(){
    int i,A,N,sum1;
    scanf("%d",&A);

    while(1){
        scanf("%d",&N);
        if(N>0){
            sum1=0;
            for(i=A;i<=(A+(N-1));i++){
                sum1=sum1+i;
            }
            printf("%d\n",sum1);
            break;
        }
        else if(N<=0) continue;
        
    }



    return 0;
}