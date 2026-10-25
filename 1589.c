#include<stdio.h>
int main(){
    int i,N,R1,R2;

    scanf("%d",&N);
    
    for(i=1;i<=N;i++){
        scanf("%d %d",&R1,&R2);
        printf("%d\n",R1+R2);

    }




    return 0;
}