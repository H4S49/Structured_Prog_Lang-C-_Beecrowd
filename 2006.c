#include<stdio.h>
int main(){
    int n,a,i,count=0;
    scanf("%d",&n);

    
    for(i=1;i<=5;i++){
        scanf("%d",&a);
        if(n==a)
        count++;
    }
    printf("%d\n",count);


    return 0;
}