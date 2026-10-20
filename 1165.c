#include<stdio.h>
int main(){
    int i,j,N,a,count;
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        scanf("%d",&a);

        count=0;
        for(j=1;j<=a;j++){
            if(a%j==0) count++;
        }
        if(count<=2) printf("%d eh primo\n",a);
        else printf("%d nao eh primo\n",a);
    }

    return 0;
}