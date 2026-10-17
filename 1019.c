#include<stdio.h>
int main(){
    int x,a,b,c,A,B;
    scanf("%d",&x);
    a = x/3600;
    A = x%3600;
    b = A/60;
    c = A%60;
    printf("%d:%d:%d\n",a,b,c);
    return 0;
}