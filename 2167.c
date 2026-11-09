#include<stdio.h>
int main(){
    int i,a,n,arr[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    a=0;
    for(int i=2;i<=n;i++){
        if(arr[i-1]>arr[i]){
            printf("%d\n",i);
            a=1;
            break;
        }
    }
    if(a==0) printf("0\n");

    return 0;
}