#include<stdio.h>
int main(){
    int N,i,j;
    double arr[999],avg;
    scanf("%d",&N);

    for(i=1;i<=N;i++){
        for(j=0;j<3;j++){
            scanf("%lf",&arr[j]);
        }
        avg = ( arr[0]*2 + arr[1]*3 + arr[2]*5 )/ 10.0 ;
        printf("%.1lf\n",avg);
        
    }


    return 0;
}