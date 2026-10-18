#include<stdio.h>
int main(){
    int N;
    double a,b;
    scanf("%d",&N);

    for(int i=1;i<=N;i++){
        scanf("%lf %lf",&a,&b);
        if((a!=0 || a==0) && b==0) printf("divisao impossivel\n");
        else if(a==0 && (b>0 || b<0)) printf("0.0\n");
        else printf("%.1lf\n",a/b);


        //  if (b == 0)
        //     printf("divisao impossivel\n");
        // else
        //     printf("%.1lf\n", a / b);
    }

    
    


    return 0;
}