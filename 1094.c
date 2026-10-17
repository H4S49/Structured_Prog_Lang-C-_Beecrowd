#include<stdio.h>
int main(){
    int N,i,a,count1=0,count2=0,count3=0;
    char b;

    scanf("%d",&N);

    for(i=1;i<=N;i++){
        scanf("%d %c",&a,&b);

        if(b=='C') {
            count1=count1+a;
        }
        else if(b=='R'){
            count2=count2+a;
        }
        else if(b=='S'){
            count3=count3+a;
        }
    }
    double count=count1+count2+count3;
    printf("Total: %g cobaias\n",count);
    printf("Total de coelhos: %d\n",count1);
    printf("Total de ratos: %d\n",count2);
    printf("Total de sapos: %d\n",count3);
    printf("Percentual de coelhos: %.2lf %%\n",(count1/count)*100.0);
    printf("Percentual de ratos: %.2lf %%\n",(count2/count)*100.0);
    printf("Percentual de sapos: %.2lf %%\n",(count3/count)*100.0);

    return 0;
}