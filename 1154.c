#include<stdio.h>
int main(){
    double N,sum=0,count=0;

    while(1){
        scanf("%lf",&N);
        if(N<0){
           break;
        }
        else {
             sum=sum+N;
             count++;
        }
    }
    printf("%.2lf\n",sum/count);

    return 0;
}